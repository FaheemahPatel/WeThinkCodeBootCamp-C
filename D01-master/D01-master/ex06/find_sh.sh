#!/bin/bash
cd 
cd desktop
cd day01
find . -name "*.sh" -exec basename {} + | sed 's/...$//'
#end
