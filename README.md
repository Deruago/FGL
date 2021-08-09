# FGL

## Overview

FGL is a library to generate "flavorings" for a given tree. This allows you to process tree-like structures easily.

## What is flavoring?

I was thinking of some useful definition to process trees easily, I then thought of this concept what I call "flavoring" and created this mini project.

The idea is that you can apply and remove flavors, these flavors are persistent to its underlying tree, this allows us to do different things dependent on which flavors are avalable. Take the following example:

```fgl
[] class -> { new.Class }

[Class] function -> { print("I am inside a class!") }
[] function -> { print("I am a global function!") }
```

Given an AST we can apply the above flavoring to differentiate between member functions and global functions. We simply apply the class flavor when we encounter a class, and if in the function type we got the flavor class, we know that the function is inside a class!

The above scenario was a relatively simple example, there are much more operations available.