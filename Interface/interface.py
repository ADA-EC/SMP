from tkinter import *
from tkinter import messagebox as msgbx

class Application:
	#Mudanca
	def __init__(self, master=None):
		self.master = master
	#Mudanca
		while True:
			self.MainWindow()

	def ConfigMenu(self):
		def on_closing():
			configWindow.destroy()

		configWindow = Tk()
		configWindow.protocol("WM_DELETE_WINDOW", on_closing)
		configWindow.mainloop()
	#Mudanca no codigo
	def DataMenu(self):
		def on_closing():
			dataWindow.destroy()

		dataWindow = Tk()
		dataWindow.title("Dados")
		containers = [Frame(self.master), Frame(self.master), Frame(self.master)]
		for c in containers:
			c.pack(side=TOP)

		labels = [Label(containers[0], text="Data"), Label(containers[0], text="Hora"), Label(containers[0], text="Valor")]
		listBox = Listbox(containers[1], bg="white", width=50, height=20)
		backButton = Button(containers[2], text="Voltar", command=on_closing, padx=50, pady=10)
		saveButton = Button(containers[2], text="Salvar", padx=50, pady=10)

		labels[0].grid(row=0, column=0, padx=20)
		labels[1].grid(row=0, column=1, padx=20)
		labels[2].grid(row=0, column=2, padx=20)
		listBox.pack(side=TOP, expand=True)
		backButton.pack(side=LEFT)
		saveButton.pack(side=RIGHT)

		dataWindow.protocol("WM_DELETE_WINDOW", on_closing)
		dataWindow.mainloop()
	#Mudanca no codigo
	def MainWindow(self):
		def clickConfig():
			mainFrame.destroy()
			self.ConfigMenu()
		#Mudanca no codigo
		def clickData():
			mainFrame.destroy()
			self.DataMenu()
		#Mudanca no codigo
		def on_closing():
			if msgbx.askokcancel("Quit", "Do you want to quit?"):
				quit()

		mainFrame = Tk()
		mainFrame.title("Menu")
		#mainFrame.pack()
		#Mudanca no codigo
		buttonData = Button(mainFrame, text="Dados", command=clickData, width=30, height=3)
		#Mudanca no codigo
		buttonData.pack()
		buttonConfig = Button(mainFrame, text="Configurações", command=clickConfig, width=30, height=3)
		buttonConfig.pack()

		mainFrame.protocol("WM_DELETE_WINDOW", on_closing)
		mainFrame.mainloop()


Application()