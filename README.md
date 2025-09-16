

## **Lab Assignment 4 – Queues**

### **Q1: Simple Queue Operations**

* Implement menu-driven program with operations: `enqueue()`, `dequeue()`, `isEmpty()`, `isFull()`, `display()`, `peek()`.
  **Sample Output:**

```
PS C:\Users\visha\OneDrive\Desktop\assign_4> cd "c:\Users\visha\OneDrive\Desktop\assign_4\" ; if ($?) { g++ aq1.cpp -o aq1 } ; if ($?) { .\aq1 }

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 1
Enter value to enqueue: 52
52 enqueued

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 2
52 dequeued

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 58
Invalid choice

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 4
Queue is empty

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 5
```

---

### **Q2: Circular Queue Operations**

* mplement menu-driven program with operations: `enqueue()`, `dequeue()`, `isEmpty()`, `isFull()`, `display()`, `peek()` using **Circular Queue**.
  **Sample Output:**

```
PS C:\Users\visha\OneDrive\Desktop\assign_4> cd "c:\Users\visha\OneDrive\Desktop\assign_4\" ; if ($?) { g++ aq2.cpp -o aq2 } ; if ($?) { .\aq2 }

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 1  
Enter value to enqueue: 25
25 enqueued

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 2
25 dequeued

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 25
Invalid choice

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 2
Queue is empty

1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit
Enter your choice: 5
```

---

### **Q3: Interleave First Half with Second Half**

* Rearrange queue so first half elements are interleaved with second half.

**Sample Output:**
```
  PS C:\Users\visha\OneDrive\Desktop\assign_4> cd "c:\Users\visha\OneDrive\Desktop\assign_4\" ; if ($?) { g++ aq3.cpp -o aq3 } ; if ($?) { .\aq3 }
4 20 7 5 11 9 
```

---

### **Q4: First Non-Repeating Character in Stream**

* Process string with queue, print first non-repeating char at each step.

**Sample Output:**
```
PS C:\Users\visha\OneDrive\Desktop\assign_4> cd "c:\Users\visha\OneDrive\Desktop\assign_4\" ; if ($?) { g++ aq4.cpp -o aq4 } ; if ($?) { .\aq4 }

a -1 b b 

```

---

### **Q5: Stack Using Queues**

* Implement stack operations using:
  (a) Two Queues
  (b) One Queue
  **Sample Output 1:**

```
PS C:\Users\visha\OneDrive\Desktop\assign_4> cd "c:\Users\visha\OneDrive\Desktop\assign_4\" ; if ($?) { g++ aq5_a.cpp -o aq5_a } ; if ($?) { .\aq5_a }
3
2
```
**Sample Output 2:**

```
PS C:\Users\visha\OneDrive\Desktop\assign_4> cd "c:\Users\visha\OneDrive\Desktop\assign_4\" ; if ($?) { g++ aq5_b.cpp -o aq5_b } ; if ($?) { .\aq5_b }
3
2
```

---

