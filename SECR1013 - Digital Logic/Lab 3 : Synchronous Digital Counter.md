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
1) Implement a synchronous counter circuit into physical circuit using Breadboard, Flip-Flops, Basic Gates and Switches. 
2) Completing the next-state table of the counter circuit. 
3) Sketch the state diagram of the counter circuit. 
4) Identify the properties of the counter.

---

## 🧪 Laboratory Work

Part 1 — JK Flip-Flop Familiarization<br>
By setting the J, K, PRE, CLR inputs manually, the students first observed the behaviour of the 7476 JK flip-flop. The output response was observed through LEDs while applying clock pulses. This step helped students understand synchronous and asynchronous operations, including reset, set, hold, and toggle conditions.

Part 2 — Circuit Construction<br>
Using the provided schematic, students assembled the synchronous counter circuit on a breadboard. All ICs were properly connected to Vcc and GND, and the clock input was supplied from the ETS-5000 Digital Kit. Switches were used to control the input variable X, while LEDs indicated the present and next states of the counter.

Part 3 — Next-State Analysis<br>
The behavior of the counter was investigated by observing the output states for all combinations of present state (Q1, Q0) and input X. The observations were recorded in a next-state table, which served as the basis for identifying the counting sequence.

Part 4 — State Diagram<br>
The state diagram of the counter was sketched by the students based on the finished next-state table. The diagram illustrates very well that the counter moves through all states in order when X = 1, whereas it stays in its present state when X = 0.

---

## 📝 Reflection

As a first-year student, this lab session on synchronous digital counters gave me valuable hands-on experience with sequential logic circuits. Before this experiment, my understanding of counters was mostly theoretical and limited to diagrams and truth tables. Building the circuit physically helped me see how flip-flops and logic gates work together in a real system.

Through this lab, I learned that the key characteristic of a synchronous counter is that all flip-flops are driven by a single common clock, causing state changes to occur simultaneously. Completing the next-state table and sketching the state diagram helped me better understand how control inputs, such as switch X, affect the behavior of the counter.

I also gained confidence in identifying counter properties, such as the number of states and whether the counter is a recycle counter. Overall, this lab strengthened my understanding of sequential circuits and helped me connect theoretical concepts with practical circuit behavior.

---

## 💡 Suggestions for Improvement
- Provide a short introductory tutorial or demo on using the Deeds Simulator before do the lab.
- Include more guided examples for K-map simplification, especially for larger or more complex input combinations.
- Alocate more time for verification and discussion after simulation.
- Provide additional practice problems or optional extension tasks using real-world scenarios.

---

## 📎 File 
Click [here](https://github.com/user-attachments/files/24342265/Lab.2.3.docx) to view Lab 2 Handout  
