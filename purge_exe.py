import os


"""
Script to help remove old executables from the system.
"""

parent = os.path.dirname(__file__)
file_name = input("Enter directory name: ")

try:
    path = os.path.join(parent, file_name)
    elements = os.listdir(path)
except FileNotFoundError:
    print("Directory not found")
    exit()

for item in elements:
    if item.endswith(".exe"):
        os.remove(os.path.join(path, item))
        print("Removed: " + item)