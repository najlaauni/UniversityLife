# 🔧 Lab 3 — Synchronous Digital Counter
**Date:** 2 until 11 January 2026

---

## 🧰 Tools Used
**ETS-5000 Digital Trainer & Breadboard:**<br>
Used to provide clock pulses, power supply, switches, and LEDs for testing the synchronous counter circuit in real time.

**TTL ICs (74-series):**<br>
- 7476 JK Flip-Flop - main storage elements of the counter<br>
- 7408 AND Gate, 7432 OR Gate, 7404 NOT Gate - used to implement the required combinational logic for next-state generation

---

## 📌 Overview
This lab session focused on the construction and analysis of a synchronous digital counter using JK flip-flops and basic logic gates. The main emphasis of the experiment was to understand how synchronous counters operate, how all flip-flops respond simultaneously to a common clock signal, and how external control inputs influence the counting behavior.

Besides constructing the physical circuit on a breadboard, students were required to analyze the circuit behavior by completing the next-state table, sketching the state diagram, and identifying the fundamental properties of the counter. This lab bridges theoretical knowledge of sequential logic with hands-on circuit implementation.

---

## 🎯 Objectives
The objectives of this lab session are to:
1) Implement a synchronous counter circuit into physical circuit using 
Breadboard, Flip-Flops, Basic Gates and Switches. 
2) Completing the next-state table of the counter circuit. 
3) Sketch the state diagram of the counter circuit. 
4) Identify the properties of the counter.

---

## 🧪 Laboratory Work

Part 1 — Circuit Analysis
Students are given a specific logic circuit and must derive its initial Boolean expressions. These expressions are simplified into Sum of Product (SOP) and Product of Sum (POS) forms using De Morgan’s Theorem and other logic rules. Students then verify their manual work by simulating the circuit in Deeds to generate truth tables and timing waveforms.

Part 2 — Combinational Circuit Design 
This section involves a practical design problem: creating a logic circuit to control an LRT coach door (OPEN and ALARM signals) based on the coach's status and its arrival at specific stations (S1, S2, or S3).<br>
Design Process:
- Defining input/output relations and constructing a truth table.
- Using Karnaugh Maps (K-Maps) to find optimized SOP equations.
- Implementing the design in Deeds Simulator.
- Converting the initial circuit into a design using only NAND gates, demonstrating their status as "Universal Gates".

---

## 📝 Reflection

As a first-year student, the Digital Logic Lab session focusing on the Deeds Simulator was a fun and eye-opening experience for me. It was my first hands-on exposure to designing and simulating combinational circuits using specialized software. Before this lab, logic gates and Boolean expressions felt very abstract because everything was learned on paper. Being able to virtually build the circuits and see them function in real-time helped me clearly understand how theoretical logic designs behave in a digital environment.

During the lab session, I learned how to use the d-DcS schematic editor to construct digital networks and generate timing diagrams to verify signal sequences. I realized the importance of the complete design cycle by starting from a problem description, like the LRT coach door system, to deriving truth tables and simplifying expressions using K-maps. These steps required patience and attention to detail, especially when converting the final design into NAND-only gates. Seeing the simulation confirm that my simplified NAND circuit worked exactly like the original design helped me better understand the power of universal gates.

Besides gaining technical knowledge in software simulation, this lab helped me connect Boolean theory with practical implementation, making the learning process more interactive and meaningful. I now feel more confident in simplifying complex logic and interpreting timing waveforms based on simulated results rather than purely theoretical assumptions. Overall, I am grateful for this experience as it strengthened my understanding of digital logic design and motivated me to keep improving my practical skills in the field of computer science.

---

## 💡 Suggestions for Improvement
- Provide a short introductory tutorial or demo on using the Deeds Simulator before do the lab.
- Include more guided examples for K-map simplification, especially for larger or more complex input combinations.
- Alocate more time for verification and discussion after simulation.
- Provide additional practice problems or optional extension tasks using real-world scenarios.

---

## 📎 File 
Click [here](https://github.com/user-attachments/files/24342265/Lab.2.3.docx) to view Lab 2 Handout  
