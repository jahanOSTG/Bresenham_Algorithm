# Bresenham Line Drawing Algorithm

## Algorithm Steps

### Step 1: Calculate ΔX and ΔY
From the given input coordinates:
- **Starting coordinates**: (X0, Y0)
- **Ending coordinates**: (Xn, Yn)

Calculate :
- (ΔX = Xn - X0)
- (ΔY = Yn - Y0)

### Step 2: Compute the Initial Decision Parameter
The decision parameter \( Pk \) is calculated as:
\[ Pk = 2*ΔY - ΔX ]

### Step 3: Determine the Next Point
For each step, the next point \( (X{k+1}, Y{k+1}) \) is determined based on the value of \( Pk \):

#### Case-1:

- **If \( Pk < 0 \):**
  - The next point is \( (X{k + 1}, Yk) \)
  - Update \( Pk \) as:
    \[ P{k+1} = P{k + 2}\ΔY \]
  - X{k+1}=Xk+1
    
#### Case-2:
- **If \( Pk >= 0 \):**
  - The next point is \( (X{k + 1}, Y{k + 1} \)
  - Update \( P_k \) as:
    \[ P{k+1} = Pk + 2*ΔY - 2*ΔX \]
  - X{k+1}=Xk+1

### Step 4: Repeat Until the End Point is Reached
Keep repeating Step 3 until the endpoint \( (Xn, Yn) \) is reached or the number of iterations equals \( (ΔX - 1) \).




