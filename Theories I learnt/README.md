# I don't like theory like other people, but...

I'm not usually a fan of theory, but I got curious about how computers actually work — how computer scientists came up with programming languages, what problems they faced, and why they kept inventing new stuff. It’s surprisingly fun to learn how things were built and why. It gives me a deeper understanding of what I'm doing :)

Today I learned a bunch of cool things, and I want to summarize them here. You might already know some of this — I did too — but writing it all down helps me recap and reflect better.

---

# A short casual history: from bits to C++ (notes)

Computers don’t literally “understand” 0s and 1s like we read letters. At the lowest level, they represent data using binary — two distinct physical states (like voltage levels or magnetic orientations) that we label as 0 and 1. Early input methods like punch cards encoded data using holes and non-holes, but the mapping between hole ↔ bit depended on the machine. The key idea: physical states get mapped to binary values, and binary is what hardware deals with.

</br></br><img width="1920" height="840" alt="image" src="https://github.com/user-attachments/assets/4f537c1f-d614-4a78-a26c-32e15bf870f3" /></br></br></br>

In the early days, people programmed machines directly using machine code — raw binary instructions executed by the CPU. It was slow, repetitive, and super error-prone. So people started looking for shortcuts: What if we used short words or symbols to represent common binary patterns? That’s how assembly language was born. (Fun fact: assembly isn’t one language — it’s a whole family of CPU-specific languages.) Assembly uses mnemonic instructions that map directly to machine code, but it’s still very low-level and tied to the hardware.

Still too hard! We needed something better.

What if we wrote code that looked more like English and could be compiled for different CPUs? That’s where C comes in. Dennis Ritchie — a genius computer scientist at Bell Labs — created C to help write operating systems (especially UNIX). It made it way easier to express algorithms and system-level logic without being stuck in machine-specific bit patterns. The book *The C Programming Language* by Kernighan and Ritchie (aka K&R) became the go-to reference for C programmers and basically acted as the unofficial standard for years. Later, ANSI formalized the language (ANSI C / C89), and ISO published international standards.  
[see more](https://en.wikipedia.org/wiki/ANSI_C)

C became super popular because UNIX and lots of important software were written in it. But as projects grew, people wanted more abstraction. One of the most influential upgrades came from Bjarne Stroustrup: he started with “C with classes” and eventually created a new language — C++. It kept C’s speed and low-level power but added features to help manage large, complex software.  
[see more](https://en.wikipedia.org/wiki/C%2B%2B)

Over time, C++ got standardized and evolved a lot. While C and C++ are often called “low-level” compared to languages like Python, many people consider them “mid-level” because they let you work close to the hardware *and* use high-level abstractions. That flexibility is a big deal.

A major milestone was **C++11** — the 2011 standard — which introduced modern features like:
- `auto` type deduction  
- lambda expressions (anonymous functions)  
- move semantics and rvalue references (better performance via resource moves)  
- smart pointers and improved standard library tools  
- `nullptr`, `constexpr`, range-based `for`, `std::thread` and concurrency support, and more  
(Some of these I still don’t fully understand, but I’m excited to learn!)

C++11 changed the game: safer code, cleaner syntax, and better performance patterns. New standards followed — C++14, C++17, C++20, C++23 — each adding more power and polish.  
Fun fact: a new standard every 3 years! Maybe next year we’ll get another one.

### So why use C/C++ today, while they are so defficult than some other languages like python??

Because they’re fast and flexible. Perfect for systems programming, game engines (like Unreal Engine), real-time systems, high-performance audio/video processing, and performance-critical parts of scientific libraries. (Even Python libraries like NumPy use C/C++ under the hood for speed.) That mix of control and performance is why C and C++ are still everywhere.

---

**Thanks for reading! I'm still learning C++, and this is just the beginning. Feel free to share your thoughts, corrections, or cool resources — I’m all ears!**
