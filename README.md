# DumpCaps
Command-line application which dumps a bunch of Direct3D 12 queryable capabilities to console output. It uses the Direct3D 12 API CheckFeatureSupport.

![Example image](https://raw.githubusercontent.com/clandrew/DumpCaps/master/Screenshot.png "Example image.")

## Usage

For viewing the caps at adapter 0, use

``` 
DumpCaps
```

For viewing the caps of some other adapter, use

``` 
DumpCaps [adapterIndex]
```

where [adapterIndex] is a numerical value.

## Build
The code is organized and built as a Visual Studio 2019 solution written in C++. 

It has been tested on an x86-64-compatible Windows 10 environment.
