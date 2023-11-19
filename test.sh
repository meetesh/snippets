#!/bin/bash

# File name
file="reportorder.txt"

# Delimiter (SOH)
delimiter=$'\x01'

# Read the file and extract the TOKEN
token=$(cut -d "$delimiter" -f 3 "$file")

# Call the API using curl and store the response
api_response=$(curl -s "http://api.com/something/${token}/abcd")

# Check if the curl command was successful
if [ $? -eq 0 ]; then
    # Append the response to the file
    echo "${delimiter}${api_response}" >> "$file"
else
    echo "Error: Failed to call the API."
fi
