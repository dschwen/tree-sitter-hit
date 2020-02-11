# tree-sitter-hit

[![Badge: npm version badge for package `tree-sitter-hit`](https://img.shields.io/npm/v/tree-sitter-hit.svg)](https://www.npmjs.com/package/tree-sitter-hit)
[![Build Status](https://travis-ci.org/dschwen/tree-sitter-hit.svg?branch=master)](https://travis-ci.org/dschwen/tree-sitter-hit)

Grammar for incrementally parsing the [MOOSE](https://mooseframework.org) HIT
(hierarchical input text) file format.

HIT is [being developed](https://github.com/idaholab/moose/tree/next/framework/contrib/hit)
by the Idaho National Laboratory as part of the MOOSE finite element framework to
provide an open-source LGPL licensed alternative to the
[getpot library](http://getpot.sourceforge.net/).

## HIT syntax

HIT is a key value pairs in nested blocks syntax.

```
[Parent]
  [Child]
     key = value
  []
[]
```

Blocks are opened by specifying a block name in square brackets (`[Parent]`).
An opened block is closed with a pair of empty square brackets (`[]`). Blocks can
be nested. A given file can have an arbitrary number of top-level blocks.

Key / value pairs are separated by an `=` sign. Values can be single- or double-quoted
strings that can span multiple lines. For values that do not contain any white space
the quotes can be omitted. Key / value pairs can appear at any level in the block
hierarchy including the top-level.

This module parses the HIT syntax at a coarse level, no type checking of values is
performed and every value is captures as a string.

Applications that utilize HIT (such as the MOOSE framework) may choose to assign
special meaning to block names. MOOSE interprets block names and parameter keys
as paths that are appended through the hierarchy. This is outside the scope of
this parser.
