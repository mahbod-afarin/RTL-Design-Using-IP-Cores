# Advantages of Using IP Cores

Project Report: [link](https://github.com/mahbod-afarin/RTL-Design-Using-IP-Cores/blob/main/Report.pdf)

## 📌 Objective

Design a complex ALU using available IP Cores from Xilinx ISE. You are required to simulate the design using ISE and construct it using the **Architecture Wizard & CORE Generator** tools provided in the software.

---

## 🧪 Part 1: ALU Design Using IP Core

- Design a complex ALU that takes two input matrices with **complex elements**.
- The ALU must support:
  - **Matrix Multiplication**
  - **Matrix Addition**
  - **Matrix Subtraction**
- Use **IP Cores from the “Functions Math” section** in the Wizard Architecture & Generator CORE.
- After designing the ALU:
  - Perform **simulation and synthesis**.
  - Extract **power**, **delay**, and **area** metrics from the synthesized design.

---

## 🔧 Part 2: ALU Design Without IP Core

- Reimplement the same ALU **from scratch**, without using any IP Cores.
- This design must fully replicate the features of the IP Core-based version.
- Implement the logic manually using either **Verilog** or **VHDL**.
- The system should be functionally equivalent and directly comparable to the IP Core-based design.

---

## 📊 Final Comparison

- Compare both implementations:
  - Functionality
  - Design metrics (power, delay, area)
- Conclude whether the IP Core-based design works correctly and **highlight the benefits** of using IP Cores.

---

## 🔍 Design Constraints

1. **Complex matrices** must be used.
2. **Matrices do not have to be square.**
3. Each matrix must have **at least 8 elements**, with each element:
   - Having at least **8 bits** total.
   - 4 bits for **real**, 4 bits for **imaginary** parts.
4. The only allowed IP Core is the **Complex Multiplier**, found under:
   - `Functions Math → Multipliers → Multiplier Complex`
5. The custom-coded version must be **equivalent** to the IP Core-based version.
6. You are free to choose **any FPGA family**.
