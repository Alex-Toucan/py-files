# python module for onetimepad
import onetimepad

# python module to create GUI
from tkinter import *

root = Tk()
root.title("GenCyber Cryptography Application")
root.geometry("800x600")

# Functions
def encryptMessage():
    pt = ptEntry.get()
    et = onetimepad.encrypt(pt, "random")
    etEntry.insert(0, et)

def decryptMessage():
    ct = ctEntry.get()
    dt = onetimepad.decrypt(ct, "random")
    dtEntry.insert(0, dt) 

# Design
## Creating labels
ptLabel = Label(root, text="Plain Text")
etLabel = Label(root, text="Encrypted Text")
ctLabel = Label(root, text="Cipher Text")
dtLabel = Label(root, text="Decrypted Text")

ptLabel.grid(row = 10, column = 1)
etLabel.grid(row = 11, column = 1)
ctLabel.grid(row = 10, column = 10)
dtLabel.grid(row = 11, column = 10)


## Creating entries
ptEntry = Entry(root)
etEntry = Entry(root)
ctEntry = Entry(root)
dtEntry = Entry(root)

ptEntry.grid(row = 10, column = 2)
etEntry.grid(row = 11, column = 2)
ctEntry.grid(row = 10, column = 11)
dtEntry.grid(row = 11, column = 11)


## Create buttons

### Create encryption button
encryptButton = Button(root, text = "Encrypt", bg="red", fg="white", command=encryptMessage)
encryptButton.grid(row = 13, column = 2)

### Create decryption button
decryptButton = Button(root, text = "Decrypt", bg="green", fg="white", command=decryptMessage)
decryptButton.grid(row = 13, column = 11)

# End Loop
root.mainloop()
