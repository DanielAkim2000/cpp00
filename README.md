*This project has been created as part of the 42 curriculum by demane.*

# CPP Module 00

## Description

**CPP Module 00** is the first step into C++ in the 42 common core. The goal is to leave C behind and get familiar with everyday C++98 features: namespaces, classes, member functions, `stdio` streams, initialization lists, `static`, `const`, and basic string handling.

This module contains three exercises:

| Exercise | Focus |
|----------|--------|
| **ex00 — Megaphone** | Arguments, `std::string`, `std::toupper`, `std::cout` |
| **ex01 — My Awesome PhoneBook** | Classes `Contact` / `PhoneBook`, interactive CLI |
| **ex02 — The Job Of Your Dreams** | Completing `Account` (statics, logging, deposits/withdrawals) |

### Overview

- **ex00** prints all command-line arguments in uppercase with no separators. With no arguments, it prints `* LOUD AND UNBEARABLE FEEDBACK NOISE *`.
- **ex01** is a small phone book that stores up to 8 contacts in a circular buffer. Commands: `ADD`, `SEARCH`, `EXIT`. Empty fields are rejected; `SEARCH` shows a truncated table (10 columns, trailing `.` when longer) then the full contact for a valid index.
- **ex02** implements the provided `Account` API so that the subject’s test program produces matching logs (timestamps aside): creation/closure, global infos, deposits, and withdrawals (including refusals).

## Instructions

### Requirements

- A C++ compiler (`c++` / `g++`) supporting **C++98**
- `make`

### Compilation

Each exercise has its own Makefile:

```bash
cd ex00   # or ex01 / ex02
make
make clean
make fclean
make re
```

Flags used: `-Wall -Wextra -Werror -std=c++98`.

### Execution

```bash
# ex00
./megaphone "shhhhh... I think the students are asleep..."
./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
./megaphone

# ex01
./phonebook
# then use ADD / SEARCH / EXIT

# ex02
./exec
```

## Classes & components

### Contact / PhoneBook (ex01)

| Class | Role |
|-------|------|
| `Contact` | First name, last name, nickname, phone number, darkest secret; `setContact`, full/truncated display |
| `PhoneBook` | Fixed array of 8 contacts; circular `index`; `addContact` / `searchContact` |

`PhoneBook` overwrites the oldest entry once full (`index = (index + 1) % 8`). EOF on input exits cleanly.

### Account (ex02)

| API | Role |
|-----|------|
| Static getters / `displayAccountsInfos` | Global account statistics |
| `makeDeposit` / `makeWithdrawal` | Update balance and counters; refuse overdrafts |
| `displayStatus` / `checkAmount` | Per-account status |
| Private statics & `_displayTimestamp` | Shared state and `[YYYYMMDD_HHMMSS]` log prefix |

## Resources

### Documentation & references

- [C++ reference (cppreference)](https://en.cppreference.com/w/) — language and library (C++98 features only)
- [iostream](https://en.cppreference.com/w/cpp/io) — `std::cin` / `std::cout`
- [string](https://en.cppreference.com/w/cpp/string/basic_string) — `std::string`
- [static members](https://en.cppreference.com/w/cpp/language/static) — used heavily in `Account`
- [LearnCpp — Classes](https://www.learncpp.com/cpp-tutorial/classes-and-class-members/)
- 42 subject: *CPP Module 00*

### Use of AI

AI assistance was used for:

- Drafting and formatting this `README.md` according to the 42 curriculum requirements
- Clarifying wording and structuring documentation sections

No AI-generated code was submitted as a substitute for personal implementation. The C++ sources were written and validated by the student.

---

*42 Paris — Common Core*
