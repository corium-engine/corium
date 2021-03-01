#!/bin/sh

cd ..
meson setup build
cd build
meson compile