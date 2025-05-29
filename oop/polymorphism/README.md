# Polymorphism

**Polymorphism** (from Greek: *"many forms"*) is a concept that allows objects of different types to be treated through a **common interface**, typically via a base class pointer or reference.

Simply put, it is the ability of **different objects to respond to the same function call** in a way that is specific to their actual type.
- This allows you to write code that is **generic**, **extensible**, and **adaptable**, enabling a wide range of object types to be used **interchangeably** through a shared interface

---

## 👉 **Example:**

![ERROR: IMAGE NOT FOUND](../../images/polymorphism-example.JPG)

---

## Compile-Time vs Run-Time

Compiled languages can differentiate between **compile-time polymorphism** (also called *static polymorphism*)  
and **run-time polymorphism** (also called *dynamic polymorphism*).

- **Compile-time polymorphism** is resolved by the compiler at compile time and is typically achieved through **function overloading** or **operator overloading**
- **Run-time polymorphism** is resolved by **virtual tables** at runtime and is typically achieved through **inheritance** and **virtual functions**
