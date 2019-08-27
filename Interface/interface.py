from tkinter import *
from tkinter import messagebox as msgbx

class Application:
	def __init__(self):
		while True:
			self.MainWindow()

	def ConfigMenu(self):
		def on_closing():
			configWindow.destroy()

		configWindow = Tk()
		configWindow.protocol("WM_DELETE_WINDOW", on_closing)
		configWindow.mainloop()

	def MainWindow(self):
		def clickConfig():
			mainFrame.destroy()
			self.ConfigMenu()

		def on_closing():
			if msgbx.askokcancel("Quit", "Do you want to quit?"):
				quit()

		mainFrame = Tk()
		#mainFrame.pack()
		buttonData = Button(mainFrame, text="Dados",  width=30, height=3)
		buttonData.pack()
		buttonConfig = Button(mainFrame, text="Configurações", command=clickConfig, width=30, height=3)
		buttonConfig.pack()

		mainFrame.protocol("WM_DELETE_WINDOW", on_closing)
		mainFrame.mainloop()


Application()