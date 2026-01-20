# Student Simulator 🎓

Short Description 💬
-----------------
Console simple student simulator — a small, console-based student life simulator implemented in C++. The player creates a nickname and manages a student's daily life: spending days to earn money and advance stages (which determine school level), managing Hunger and Energy, eating to restore Hunger, and resting to restore Energy. The program is a lightweight demonstration of basic game logic, progression systems, and state management using simple C++ constructs.

Announcement 📢
------------
This project is written using C++17.

Features ✅
--------
- Create a nickname and view personalized statistics 🆔  
- School level progression determined by Stage: Primary → Middle → High → University 🏫  
- Spend the day to earn money and increase Stage (requires sufficient Hunger and Energy) 💼➡️📈  
- Eat to restore Hunger (costs money) 🍽️  
- Rest to restore Energy 🛌  
- Hunger and Energy values clamped between 0 and 100 ⚖️  
- Displays player statistics: Nickname, Money, Hunger, Energy, School Level, Stage 📊

Example usage / sample session 💡
------------------------------
Below is an example interaction with the program (user input shown after prompts):

```text
Enter a nickname: Alice
Welcome, Alice!

---------------------------------
Nickname: Alice
Money: $0
Hunger: 100
Energy: 100
---------------------------------
School Level: Primary School
Stage: 0
---------------------------------

[1] - Spend the day
[2] - Eat
[3] - Rest
[4] - Exit
Choose: 1
spended the day, earned $50

---------------------------------
Nickname: Alice
Money: $50
Hunger: 50
Energy: 50
---------------------------------
School Level: Primary School
Stage: 1
---------------------------------

[1] - Spend the day
[2] - Eat
[3] - Rest
[4] - Exit
Choose: 1
You spent the day, earned $50, and progressed a stage.

---------------------------------
Nickname: Alice
Money: $100
Hunger: 0
Energy: 0
---------------------------------
School Level: Primary School
Stage: 2
---------------------------------

[1] - Spend the day
[2] - Eat
[3] - Rest
[4] - Exit
Choose: 1
Low energy or hunger!

[1] - Spend the day
[2] - Eat
[3] - Rest
[4] - Exit
Choose: 2
You need $25 to eat! 

Choose: 2
You ate a meal for $25!
// Hunger increases (clamped to 100)

Choose: 3
rested!
// Energy increases (clamped to 100)

Choose: 4
// Program exits
```

Notes and limitations ⚠️
---------------------
- The current implementation uses global variables and simple input handling. Non-numeric or malformed input may break the program.  
- Spending the day requires Hunger >= 50 and Energy >= 50; otherwise action is blocked.  
- Eating costs $25 and increases Hunger by 100 (then clamped to 100).  
- Resting increases Energy by 100 (then clamped to 100).  
- School level is derived from Stage:  
  - Stage 0–4: Primary School  
  - Stage 5–9: Middle School  
  - Stage 10–14: High School  
  - Stage >=15: University  
- The game is single-player and does not save progress between runs.  
- Consider adding robust input validation (std::cin checks or parsing via getline), more granular actions, or persistence for extended functionality.

Author 👤
------
wdemirkoll — GitHub: @wdemirkoll

📅 January 2026
