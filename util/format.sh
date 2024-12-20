#!/bin/bash

find ./ -iname *.cpp -o -iname *.h -o -iname *.hpp | xargs clang-format -i
