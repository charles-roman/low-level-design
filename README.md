# low-level-design

## Summary

This repo contains an overview of several fundamental topics in low-level (system) design (LLD) / Object-Oriented Design (OOD) along with simple and practical examples in C++.

## Resources

[Design Patterns, Elements of Reusable Object-Oriented Software, 1st Ed.]([https://example.com](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612))

## Table of Contents

- [Composite Data Structures / PODs](#composite-data-structures-pods)

- [Object-Oriented Programming (OOP)](#object-oriented-programming-oop)
  - [Classes & Objects](#classes--objects)
    - [Attributes and Methods](#attributes-and-methods)
      - [Instance vs Class Attributes](#instance-vs-class-attributes)
      - [Instance vs Class Methods](#instance-vs-class-methods)
    - [Validating Attributes](#validating-attributes)
    - [Mutability](#mutability)
    - [Properties, Getters & Setters](#properties-getters--setters)
    - [Access Modifiers](#access-modifiers)
    - [Special Methods](#special-methods)
      - [Constructor](#constructor)
      - [Copy Constructor](#copy-constructor)
        - [Shallow Copy vs Deep Copy](#shallow-copy-vs-deep-copy)
      - [Destructor](#destructor)
      - [Operator Overloading](#operator-overloading)
  - [Interface vs Implementation](#interface-vs-implementation)
  - [Abstract Classes](#abstract-classes)
  - [Dependency Injection](#dependency-injection)
  - Fundamental Concepts
    - [Encapsulation](#encapsulation)
    - [Abstraction](#abstraction)
    - [Inheritance](#inheritance)
    - [Polymorphism](#polymorphism)
      - [Compile-Time Polymorphism vs Run-Time Polymorphism](#compile-time-polymorphism-vs-run-time-polymorphism)

- Design Principles
  - [SOLID](#solid)
  - [DRY](#dry)
  - [KISS](#kiss)
  - [YAGNI](#yagni)
  - [LoD](#lod)
  - [Composition over Inheritance](#composition-over-inheritance)

- [Design Patterns](#design-patterns)
  - Creational Patterns
    - [Abstract Factory](#abstract-factory)
    - [Factory](#factory)
  - Structural Patterns
    - [Adapter](#adapter)
    - [Composite](#composite)
    - [Decorator](#decorator)
  - Behavioral Patterns
    - [Observer](#observer)
    - [Strategy](#strategy)
    - [Template Method](#template-method)

- [UML Diagrams](#uml-diagrams)
  - Structural Diagrams
    - [Class Diagram](#class-diagram)
    - [Component Diagram](#component-diagram)
  - Behavioral Diagrams
    - [Sequence Diagram](#sequence-diagram)
    - [Activity Diagram](#activity-diagram)
    - [Use Case Diagram](#use-case-diagram)
    - [State Diagram](#state-diagram)


## Composite Data Structures (PODs)

## Object-Oriented Programming (OOP)

**Object-Oriented Programming (OOP)** is a programming paradigm — a fundamental style or way of thinking about programming that dictates how you organize, structure, and solve problems using code — based on the concept of **"objects"**, which are instances of **classes**.

These **objects** bundle together **data and behavior** in a single unit, allowing you to model real-world entities more naturally and organize code in a **modular**, **reusable** way.

## Classes & Objects

A **class** is a *blueprint* or *template* for creating objects. It defines the **properties** (also known as *attributes*, *fields*, or *data members*) and **behaviors** (also known as *methods*, *operations*, or *member functions*) that the objects created from the class will have. Classes essentially allow for the creation of **custom types**.

An **object** (also known as an *entity*) is an **instance** of a class. When an object is created from a class, we say it was *instantiated* from that class. Objects typically represent things from the real world but can be anything you want to store and process data about.

---

👉 **Example:**

![ERROR: IMAGE NOT FOUND](images/dog-class-example1.JPG)

![ERROR: IMAGE NOT FOUND](images/dog-class-example2.JPG)

### Attributes and Methods
---
#### Instance vs Class Attributes
#### Instance vs Class Methods
### Validating Attributes
---
### Mutability
---
### Properties, Getters & Setters
---
### Access Modifiers
---
### Special Methods
---
#### Constructor
#### Copy Constructor
##### Shallow Copy vs Deep Copy
#### Destructor
#### Operator Overloading
### Interface vs Implementation
---

The **interface** includes the properties and methods a program (or programmer) can interact with.

The **implementation** consists of the internal logic—data structures and methods—that work behind the scenes  
and are usually modified only by the class creator.

> In some programming languages, it's common to separate these into different files (e.g., header and source files in C++).

### Abstract Classes
---
An **abstract class** is a blueprint for other classes, serving as a foundation for creating more specific, **concrete classes**.

It **cannot be instantiated directly**, and it often contains **abstract methods** that must be implemented by its subclasses.

Abstract classes are used to define common characteristics and behaviors that multiple related classes share,  
promoting **code reuse** and **organization**.

### Dependency Injection
---
## Fundamental Concepts
## Encapsulation

**Encapsulation** is the concept of hiding the internal state of an object and requiring all interaction to occur through well-defined interfaces (typically methods).

- This protects an object’s integrity by preventing external code from directly modifying its internal state in unintended ways
- It also allows you to change implementation details without affecting the code that uses the object

---

👉 **Example:**

> A common example of **encapsulation** is restricting access to object properties, allowing them to be accessed or modified only through methods (**getters** and **setters**) defined in the interface.

![ERROR: IMAGE NOT FOUND](images/encapsulation-example.jpg)

## Abstraction
**Abstraction** is the principle of hiding complex implementation details and exposing only the essential features of an object or system.

- It allows programmers to interact with objects through **simple, high-level interfaces**
- The internal workings (implementation) are **hidden (abstracted away)**, so the user doesn't need to understand the underlying details

---

👉 **Example:**

> A common example of **abstraction** is when creating an **abstract class**, which defines an interface including various **abstract methods**. These methods are then implemented uniquely in **subclasses** (also called *concrete classes*) that inherit from the abstract class. This interface—this *abstraction*—allows programs or programmers to interact with subclass objects **without needing to worry about their specific implementations**.

![ERROR: IMAGE NOT FOUND](images/abstraction-example.jpg)

## Inheritance

**Inheritance** is a mechanism that allows one class (called a *subclass*, *derived class*, or *child class*) to acquire the properties and behaviors (i.e., attributes and methods) of another class (called a *superclass*, *base class*, or *parent class*).

- It enables a new class to **reuse**, **extend**, or **modify** the functionality defined in an existing class, promoting **code reuse** and a natural **hierarchical relationship** between classes

---

👉 **Example:**

![ERROR: IMAGE NOT FOUND](images/inheritance-example.jpg)

## Polymorphism

**Polymorphism** (from Greek: *"many forms"*) is a concept that allows objects of different types to be treated through a **common interface**, typically via a base class pointer or reference.

Simply put, it is the ability of **different objects to respond to the same function call** in a way that is specific to their actual type.
- This allows you to write code that is **generic**, **extensible**, and **adaptable**, enabling a wide range of object types to be used **interchangeably** through a shared interface

---

👉 **Example:**

![ERROR: IMAGE NOT FOUND](images/polymorphism-example.jpg)

---

### Compile-Time Polymorphism vs Run-Time Polymorphism

Compiled languages can differentiate between **compile-time polymorphism** (also called *static polymorphism*)  
and **run-time polymorphism** (also called *dynamic polymorphism*).

- **Compile-time polymorphism** is resolved by the compiler at compile time and is typically achieved through **function overloading** or **operator overloading**
- **Run-time polymorphism** is resolved by **virtual tables** at runtime and is typically achieved through **inheritance** and **virtual functions**

## Design Principles
## SOLID
## DRY
## KISS
## YAGNI
## LoD
## Composition over Inheritance

## Design Patterns
### Creational Patterns
### Structural Patterns
### Behavioral Patterns

## Abstract Factory
## Factory

## Adapter
## Composite
## Decorator

## Observer
## Strategy
## Template Method

## UML Diagrams
## Class Diagram
## Component Diagram
## Sequence Diagram
## Activity Diagram
## Use Case Diagram
## State Diagram

