import os
import re

# --- Configuration ---
RATINGS = [str(r) for r in range(800, 2000, 100)]
PROBLEMS_PER_RATING = 31
TOTAL_PROBLEMS = len(RATINGS) * PROBLEMS_PER_RATING
README_PATH = os.path.join(os.path.dirname(__file__), "README.md")  # ✅ Correct absolute path


# --- Count .cpp files inside a folder ---
def count_solved(folder):
    try:
        return len([f for f in os.listdir(folder) if f.lower().endswith('.cpp')])
    except FileNotFoundError:
        print(f"⚠️ Folder not found: {folder}")
        return 0


# --- Create a progress bar for overall completion ---
def generate_progress_bar(solved, total, length=35):
    percent = solved / total
    filled = int(round(length * percent))
    bar = "█" * filled + "." * (length - filled)
    return f"`[{bar}] {percent * 100:.1f}%`"


# --- Update README.md content dynamically ---
def update_readme(solved_dict, total_solved):
    with open(README_PATH, 'r', encoding='utf-8') as f:
        content = f.read()

    # --- 1. Build new markdown table section ---
    new_table = "## 🚀 My Progress\n\n"
    new_table += "| Rating | Solved ✅ | Total 📄 | Completion 📈 |\n"
    new_table += "|--------|-----------|----------|----------------|\n"

    for rating in RATINGS:
        solved = solved_dict.get(rating, 0)
        percent = int((solved / PROBLEMS_PER_RATING) * 100)
        new_table += f"| {rating} | `{solved}/{PROBLEMS_PER_RATING}` | {PROBLEMS_PER_RATING} | `{percent}%` |\n"

    # --- 2. Add overall progress bar ---
    new_table += f"\n📊 **Overall Progress: {total_solved} / {TOTAL_PROBLEMS}**\n\n"
    new_table += generate_progress_bar(total_solved, TOTAL_PROBLEMS) + "\n\n"
    new_table += "> This progress bar is auto-updated using `update_readme.py`\n"

    # --- 3. Replace previous section in README ---
    pattern = r"## 🚀 My Progress[\s\S]*?(?=## |\Z)"
    content = re.sub(pattern, new_table.strip() + "\n\n", content)

    with open(README_PATH, 'w', encoding='utf-8') as f:
        f.write(content)

    print("✅ README.md updated successfully!")


# --- Map rating to folder (handles 0800, 0900 naming) ---
def rating_to_folder(rating):
    return rating if int(rating) >= 1000 else f"0{rating}"


# --- Main Execution ---
if __name__ == "__main__":
    base_dir = os.path.dirname(__file__)
    solved_map = {}
    total_solved = 0

    for rating in RATINGS:
        folder = os.path.join(base_dir, rating_to_folder(rating))
        solved = count_solved(folder)
        solved_map[rating] = solved
        total_solved += solved

    update_readme(solved_map, total_solved)
