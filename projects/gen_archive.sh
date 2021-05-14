#!/bin/bash

DIR=$(pwd)
cd $(DIR)/A/1.0 && tar --exclude .git -czvf ../../archives/A1.0.tar.gz  .
cd $(DIR)/A/1.1 && tar --exclude .git -czvf ../../archives/A1.1.tar.gz  .
cd $(DIR)/A/1.1-another && tar --exclude .git -czvf ../../archives/A1.1-another.tar.gz  .
cd $(DIR)/B/1.0 && tar --exclude .git -czvf ../../archives/B1.0.tar.gz  .
cd $(DIR)/B/1.1 && tar --exclude .git -czvf ../../archives/B1.1.tar.gz  .
cd $(DIR)/B/1.2 && tar --exclude .git -czvf ../../archives/B1.2.tar.gz  .
cd $(DIR)/C/1.0 && tar --exclude .git -czvf ../../archives/C1.0.tar.gz  .
cd $(DIR)/C/1.1 && tar --exclude .git -czvf ../../archives/C1.1.tar.gz  .
