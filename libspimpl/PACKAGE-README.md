# libspimpl - A C++ library

This is a `build2` package for the [`spimpl`](https://github.com/oliora/samples/)
C++ header library. It provides a single-header C++ library for PIMPLs without having to implement any special member functions as described in [`oliora's blog`](https://oliora.github.io/2015/12/29/pimpl-and-rule-of-zero.html).


## Usage

To start using `libspimpl` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libspimpl ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libspimpl%lib{<TARGET>}
```

