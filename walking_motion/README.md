# Walking Motion Algorithm 📋

## Overview
This algorithm describes how the walking motion will be executed in the humanoid robot.

---

## Steps:
1. **Initialize all servos at 90° (neutral position).**  
2. **Lift the right leg:**  
   - Move the right hip servo forward.  
   - Bend the right knee.  
   - Adjust the right ankle.  
3. **Shift weight to the left leg.**  
4. **Place the right leg back on the ground.**  
5. **Lift the left leg:**  
   - Move the left hip servo forward.  
   - Bend the left knee.  
   - Adjust the left ankle.  
6. **Shift weight to the right leg.**  
7. **Place the left leg back on the ground.**  
8. **Repeat the cycle until the stop condition is met.**

---

