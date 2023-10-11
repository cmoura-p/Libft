ifconfig | grep ether | cut -d " " -f10
# Retrieve network interface configuration information.
# Filter lines containing the word "ether", which are Ethernet (MAC) addresses.
# Split the line into fields using space as the delimiter, and extract the MAC address.
