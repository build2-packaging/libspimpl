# libspimpl - <SUMMARY>

This is a `build2` package for the [`spimpl`](https://github.com/oliora/samples/)
C++ header library. It provides a single-header C++ library for PIMPLs without having to implement any special member functions as described in [`oliora's blog`](https://oliora.github.io/2015/12/29/pimpl-and-rule-of-zero.html).

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`libspimpl` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](<PACKAGE>/PACKAGE-README.md) file.

The development setup for `libspimpl` uses the standard `bdep`-based workflow.
For example:

```
git clone .../libspimpl.git
cd libspimpl

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
