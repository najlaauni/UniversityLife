# 🔧 Lab 1 — Combinational Logic
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

## 🧪 Laboratory Work

### **🟩 Part 1 — AND Gate Circuit**
- Constructed using 7408 IC
- Tested all input combinations using switches

---

### **🟧 Part 2 — NAND Gate Circuit**
- Built using 7408 and 7404 IC
- Compared truth table results with NAND logic behavior

---

### **🟥 Part 3 — Combined Logic Circuit**
- Build using 7408, 7404 and 7432 IC  
- Constructed a slightly more complex logic circuit involving multiple gates  
- Observed that the final circuit behaved like a single gate equivalent after simplification

---

## 📊 Truth Table (PART 1)

| A | B | Output |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

---

## 📎 File 
Click [here](https://github.com/XuanYee06/MyUniversityJourney/blob/7c148011161824db53a9c06d7ca113a799648075/Digital%20Logic/Lab%201%20-%20Handout.pdf) to view Lab 1 Handout  

---

## 📷 Photos
![93e57857-2962-463f-87b8-5b67db19054f](https://github.com/user-attachments/assets/3884e9e6-72ec-44f6-861d-008c498aa602)  
*Breadboard*  

![09731db4-95ec-4895-a765-2ac51d7d6e3b](https://github.com/user-attachments/assets/30f55507-169c-47ae-9e11-c3021c5f64eb)
*PART 1 AND Gate Circuit*  

![e84ed98c-4f13-452d-b807-d9dce675744e](https://github.com/user-attachments/assets/d878ce6a-0448-4231-83ab-768de88c6c3f)
*PART 3 Combined Logic Circuit*  

---

## 📝 Reflection

This lab was my first hands-on experience with digital logic and it was fun and interesting! It helped me understand how theoretical logic gates behave in real hardware. Before this, I felt logic gates were abstract because everything was done on paper. In my opinion, it feels more interactive by using breadboards, switches and LEDs.

One of the challenges I faced was to ensure the wires were connect correctly and to make sure the circuit was clean and organized to avoid mistakes and errors. Besides that, I also learned the importance of checking the IC orientation and verifying logic outputs using the mode switch and LEDs.

All in all, this lab helped me connect theory with physical implementation. Now, I feel more confident to handle logic gate circuits and interpret the truth tables from real measurements instead of only theoretical assumptions.
