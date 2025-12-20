# 🔧 Lab  — Combinational Digital Circuit Design Simulation Using Deeds Simulator
**Date:** 18 November 2025  
**Time:** 11:00am - 1:00pm  
**Location:** Digital Logic Lab (room no 328-02, N28)
   

---

## 📌 Overview
The lab session presented the fundamental principles of combinational logic circuits. Besides, it was mainly about the practical aspect of working with wiring, breadboarding, and using real hardware testing to verify the behaviors of the logic gates. The main objective of this laboratory was to construct basic logic circuits and then check their behavior using switches and LEDs in order to confirm their truth tables.

We used several IC logic gates such as:
- 7408 — AND Gate<br>
- 7404 — NOT Gate (Inverter)<br>
- 7432 — OR Gate<br>

---

## 🎯 Objectives
The objectives of this lab session are to introduce the student to:
- basic bread boarding and wiring techniques.
- the use of input switches and output LEDs in generating truth tables for a combinational logic circuit.
- verify the characteristic of the basic gates.

---

## 🧰 Materials
| Item | Description |
|------|------------|
| Breadboard | For wiring the circuits |
| IC Chips | Use 7408 (AND), 7404 (NOT), and 7432 (OR) |
| ETS-5000 Digital Training Kit | Provides power, input switches, and LEDs |

---

## ✨ Breadboarding and Wiring Practices

| Topic | Key Practice |
|------|---------------|
| Wire Gauge | Use only 22 gauge wire to prevent damaging the breadboard |
| Wire Color | Use an organized color scheme (e.g., RED for $V_{CC}$, BLACK for Ground, BLUE for Inputs, YELLOW for intermediate signals). |
| Wire Length | Use wires of appropriate length so they lie flat on the breadboard |
| Wire Placement | Avoid running wires over ICs to allow for easy removal | 
| IC Orientation | Arrange all ICs in the same direction. Connect $V_{CC}$ to $5V$ strip and GND to ground strip first. Reversing an IC ($V_{CC}$ and GND) may destroy it. |
| IC Insertion | New IC pins must be bent back vertically before insertion. |
| IC Removal | Use an extraction tool to prevent bending pins. |
| IC Testing | Always check ICs using the chip tester before wiring the circuit. |

---

## ✨ Circuit Monitoring and Input

| Component | Function / Indication |
|------|---------------|
| Mode Switch | Ensure it is set to TTL (Transistor-Transistor Logic), not CMOS |
| LED Monitor (Top Right) | GREEN = Logic LOW (0); RED = Logic HIGH (1). If unlit, check the circuit and switch off power |
| Logic Probe (Bottom Right) | H = Logic HIGH (1); L = Logic LOW (0); P = Pulse (changing signal). |
| Switches (Bottom Row) | 8 toggle switches provide the circuit input: HIGH (1) and LOW (0). |

---

## 🧪 Laboratory Work
- Part 1 — AND Gate Circuit<br>
  The combinational logic circuit was built using the 7408 IC and verified by testing all possible input combinations with switches.

- Part 2 — NAND Gate Circuit<br>
  The circuit was built by connecting the 7408 IC and 7404 IC and was verified by comparing its resulting truth table, which represents an NAND logic function.

- Part 3 — Combined Logic Circuit<br>
  The constructed circuit, which used 7408 IC, 7404 IC, and 7432 IC to implement a multi-gate logic function, was simplified through Boolean algebra or visual methods, demonstrating that the complex circuit behaved identically to a much simpler single-gate equivalent.

---

## 📊 Truth Table

- Part 1 — AND Gate Circuit
   | A | B | Output |
   |---|---|--------|
   | 0 | 0 | 0 |
   | 0 | 1 | 0 |
   | 1 | 0 | 0 |
   | 1 | 1 | 1 |

- Part 2 — NAND Gate Circuit
   | A | B | C | Output |
   |---|---|---|--------|
   | 0 | 0 | 0 | 1 |
   | 0 | 1 | 0 | 1 |
   | 1 | 0 | 0 | 1 |
   | 1 | 1 | 1 | 0 |

- Part 3 — Combined Logic Circuit
   | A | B | C | D | Output |
   |---|---|---|---|--------|
   | 0 | 0 | 0 | 0 | 0 |
   | 0 | 1 | 0 | 1 | 1 |
   | 1 | 0 | 1 | 0 | 1 |
   | 1 | 1 | 0 | 0 | 0 |

---

## 📝 Reflection

As a first-year student, the Digital Logic Lab session was a fun and eye-opening experience for me. It was my first hands-on exposure to digital logic using real hardware such as breadboards, switches, and LEDs. Before this lab, logic gates felt very abstract because everything was learned on paper. Being able to physically build the circuits helped me clearly understand how theoretical logic gates behave in real hardware.

During the lab session, I learned how to properly connect wires on the breadboard and ensure the circuit was neat and organised to avoid errors. I also realised the importance of checking the IC orientation carefully and verifying logic outputs using the mode switch and LEDs. These steps required patience and attention to detail, but they helped me better understand how small mistakes can affect the entire circuit.

Besides gaining technical knowledge, this lab helped me connect theory with physical implementation, making the learning process more interactive and meaningful. I now feel more confident in handling logic gate circuits and interpreting truth tables based on real measurements rather than purely theoretical assumptions. Overall, I am grateful for this hands-on experience as it strengthened my understanding of digital logic and motivated me to keep improving my practical skills in the field of electronics.

---

## 🔧 Improvement Suggestions
- Provide a short post-lab discussion to review common mistakes and reinforce key concepts learned during the session.<br>

---

## 📎 File 
Click [here](https://github.com/user-attachments/files/24141028/Lab.1.-.Handout.pdf) to view Lab 1 Handout  

---

## 📸 Lab Highlights
Here are some photos from our hands-on session:

![dfb93e0b-2612-4d96-b7e4-664ee53dc0d6](https://github.com/user-attachments/assets/32d9a39a-ee35-4302-9f34-ef1f9b41f5dd) <br>
*Breadboard* 

![2db3e218-fa5a-47e7-9ee2-0c66238cb0c4](https://github.com/user-attachments/assets/21afd3b2-f93a-4154-91c4-7350875cf8de) <br>
*7408 (AND), 7404 (NOT), and 7432 (OR)* 

![6f65c326-df75-4f71-80a1-a6ff47d7636f](https://github.com/user-attachments/assets/49a45409-a11a-410c-adad-2a74fadb9c8a) <br>
*PART 1 AND Gate Circuit*  

![eef2b021-ba62-45ce-9db4-1575ccb6387d](https://github.com/user-attachments/assets/14b3f9e0-4e89-461b-bcdb-6d8d6b883a49) <br>
*PART 2 NAND Gate Circuit* 

![0ee857e7-c2e5-42d6-a977-584608026449](https://github.com/user-attachments/assets/78e6f6d2-667e-4214-a250-c5d853b1bb8b) <br>
*PART 3 Combined Logic Circuit*  

![b150dc09-9eb0-4071-aac2-7186e97a796f](https://github.com/user-attachments/assets/20f10d41-c6c3-4b5d-9b8a-a51d666cc68b) <br>

![e51142df-3dda-4c4b-8bf3-98744c7ec233](https://github.com/user-attachments/assets/c8005a76-8313-4006-8edb-1265af7a99ab) <br>

![5004d3ad-8c4f-45e7-a959-2802c8441fb6](https://github.com/user-attachments/assets/bb71ecae-de78-4927-a95a-7f98aed1eda8) <br>
