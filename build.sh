#!/bin/bash
cmake .
make -j $(nproc)
sudo mv stormscript /usr/bin/stormscript

sudo cp src/core/errors.sts /usr/local/bin
sudo chmod 777 /usr/local/bin/errors.sts
