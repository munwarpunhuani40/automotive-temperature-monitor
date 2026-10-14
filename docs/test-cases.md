# Test Cases

## Purpose

These tests check whether the temperature monitoring program reports the correct status and controls the LEDs according to the simulated temperature.

## Test 1: Normal Temperature

**Input:** Simulated temperature of 25 degrees.

**Expected results:**
- Status is NORMAL.
- Green LED is ON.
- Yellow LED is OFF.
- Red LED is OFF.

**Actual result:** Not tested yet.

**Status:** Not run.

---

## Test 2: Warning Temperature

**Input:** Simulated temperature of 60 degrees.

**Expected results:**
- Status is WARNING.
- Green LED is OFF.
- Yellow LED is ON.
- Red LED is OFF.

**Actual result:** Not tested yet.

**Status:** Not run.

---

## Test 3: Critical Temperature

**Input:** Simulated temperature of 80 degrees.

**Expected results:**
- Status is CRITICAL.
- Green LED is OFF.
- Yellow LED is OFF.
- Red LED is ON.

**Actual result:** Not tested yet.

**Status:** Not run.

---

## Test 4: Maximum Simulated Temperature

**Input:** Simulated temperature of 100 degrees.

**Expected results:**
- Status is CRITICAL.
- Red LED is ON.

**Actual result:** Not tested yet.

**Status:** Not run.

---

## Test 5: Return to Normal

**Input:**
1. Set the simulated temperature to 90 degrees.
2. Reduce it to 30 degrees.

**Expected results:**
- The status changes from CRITICAL to NORMAL.
- Red LED turns OFF.
- Green LED turns ON.

**Actual result:** Not tested yet.

**Status:** Not run.

---

## Test 6: Warning Boundary

**Input:** Simulated temperature of 59 degrees,
followed by 60 degrees.

**Expected results:**
- At 59 degrees, status is NORMAL.
- At 60 degrees, status is WARNING.

**Actual result:** Not tested yet.

**Status:** Not run.

---

## Test 7: Critical Boundary

**Input:** Simulated temperature of 79 degrees,
followed by 80 degrees.

**Expected results:**
- At 79 degrees, status is WARNING.
- At 80 degrees, status is CRITICAL.

**Actual result:** Not tested yet.

**Status:** Not run.

---

## Test Summary

Execute every test in the simulator or on the
hardware before marking it as passed.

Record any unexpected results and fix the problem
before running the test again.

These tests check demonstration logic only. They do
not validate the system for use in a real vehicle.
