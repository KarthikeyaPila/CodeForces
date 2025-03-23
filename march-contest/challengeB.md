B. Quantum Resonance Dilemma
time limit per test2 s.
memory limit per test256 MB
Commander Vega is stranded in an asteroid belt filled with hostile alien fleets. To escape this sector, they must eliminate all 𝑛
 alien squadrons present. Both Vega's starship and the alien fleets have power levels represented by integers. When engaging a fleet, the outcome is determined by comparing power levels. Initially, Vega's ship has a power level of 𝑠
.

If Vega challenges the 𝑖
-th (1≤𝑖≤𝑛
) alien fleet when their ship's power doesn't exceed the fleet's power 𝑥𝑖
, they lose the battle and get destroyed. If Vega's power is greater, they destroy the fleet and gain a power boost of 𝑦𝑖
 from salvaged technology.

Vega can engage the fleets in any order. Determine whether they can clear the sector by defeating all fleets without any losses.

Input
First line contains two space-separated integers 𝑠
 and 𝑛
 (1≤𝑠≤104
, 1≤𝑛≤103
). Then 𝑛
 lines follow: the 𝑖
-th line contains integers 𝑥𝑖
 and 𝑦𝑖
 (1≤𝑥𝑖≤104
, 0≤𝑦𝑖≤104
) - the 𝑖
-th fleet's power and salvage value.

Output
Print "YES" if Vega can clear the sector, otherwise "NO".

Examples
Input
2 2
1 99
100 0
Output
YES
Input
10 1
100 100
Output
NO

Note
In the first sample, Vega's initial power level is 2. Since the first alien fleet's power (1) is weaker, Vega destroys it and gains a +99 salvage boost, increasing their power to 2+99=101
. This allows them to overpower the second fleet (power 100) and clear the sector.

In the second sample, Vega's starting power (10) is insufficient to challenge the lone alien fleet making victory impossible.

