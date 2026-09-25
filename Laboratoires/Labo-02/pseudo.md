# Pseudo code de votre programme

1. Greet
   - Prompt a short description of the tool
   - Prompt the consts
   - Ask for the var
     - If the input is not valid (not numbers) re-ask
     - If L1 is > than dy, prompt a message to re-ask
2. Compute the duration 
   - calculate the length of the dirt path (l2)
     - $l2 = \sqrt{(dy - l1)^2 + dx^2}$
   - $d1 = \frac{l1}{s1}$
   - $d2 = \frac{l2}{s2}$
   - $total_{hours} = d1 + d2$
   - Then compute the minutes
3. See ya !
   - Prompt the result
