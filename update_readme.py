import os
import re

RATINGS = [str(r) for r in range(800, 2000, 100)]
PROBLEMS_PER_RATING = 31
TOTAL_PROBLEMS = len(RATINGS) * PROBLEMS_PER_RATING
README_PATH = "README.md"

def count_solved(folder):
    try:
        return len([f for f in os.listdir(folder) if f.endswith('.cpp')])
    except FileNotFoundError:
        return 0

def generate_progress_bar(solved, total, length=35):
    percent = solved / total
    filled = int(round(length * percent))
    bar = "█" * filled + "." * (length - filled)
    return f"`[{bar}] {percent * 100:.1f}%`"

def update_readme(solved_dict, total_solved):
    with open(README_PATH, 'r', encoding='utf-8') as f:
        content = f.read()

    # --- 1. Safely update the markdown table section ---
    new_table = "## 🚀 My Progress\n\n"
    new_table += "| Rating | Solved ✅ | Total 📄 | Completion 📈 |\n"
    new_table += "|--------|-----------|----------|----------------|\n"

    for rating in RATINGS:
        solved = solved_dict.get(rating, 0)
        percent = int((solved / PROBLEMS_PER_RATING) * 100)
        new_table += f"| {rating}    | `{solved}/{PROBLEMS_PER_RATING}`    | {PROBLEMS_PER_RATING}       | `{percent}%`           |\n"

    # Append the progress bar after the table
    new_table += f"\n📊 **Overall Progress: {total_solved} / {TOTAL_PROBLEMS}**\n\n"
    new_table += generate_progress_bar(total_solved, TOTAL_PROBLEMS) + "\n\n"
    new_table += "> This progress bar is auto-updated using `update_readme.py`\n"

    # --- 2. Replace everything from '## 🚀 My Progress' to the next '## ' OR end of file
    pattern = r"## 🚀 My Progress[\s\S]*?(?=## |\Z)"
    content = re.sub(pattern, new_table.strip() + "\n\n", content)

    with open(README_PATH, 'w', encoding='utf-8') as f:
        f.write(content)

    print("✅ Clean update complete: README.md updated!")

# --- Run ---
if __name__ == "__main__":
    solved_map = {}
    total_solved = 0
    for rating in RATINGS:
        solved = count_solved(rating)
        solved_map[rating] = solved
        total_solved += solved

    update_readme(solved_map, total_solved)
