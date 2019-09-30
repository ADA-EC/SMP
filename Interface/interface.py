from tkinter import *
from tkinter import messagebox as msgbx
#import serial

class Application:
	def __init__(self, master=None):
		self.master = master
		self.height = 428
		self.width = 404
		while True:
			self.MainWindow()

	def ConfigMenu(self):
		def on_closing():
			configWindow.destroy()

		def clickHora():
			configWindow.destroy()
			self.ConfigHora()

		def clickFreq():
			configWindow.destroy()
			self.ConfigFreq()

		configWindow = Tk()
		configWindow.geometry(str(self.width)+'x'+str(self.height))
		configWindow.protocol("WM_DELETE_WINDOW", on_closing)

		configAtual = Label(configWindow, text="Configuração Atual:")
		configAtual.pack()
		buttonHora = Button(configWindow, text="Alterar Data/Hora", command=clickHora, width=30, height=3)
		buttonHora.pack()
		buttonFreq = Button(configWindow, text="Alterar Frequência", command=clickFreq, width=30, height=3)
		buttonFreq.pack()
		buttonVoltar = Button(configWindow, text="Voltar",command=on_closing, width=10, height=1)
		buttonVoltar.pack()

		configWindow.mainloop()

	def ConfigHora(self):
		def on_closing():
			windowHora.destroy()
			self.ConfigMenu()

		def salvar_dados():
			salvarDados = Tk()
			salvarDados.geometry("100x60")
			dadosSalvos = Label(salvarDados, text="\nDados Salvos!")
			dadosSalvos.pack()
			on_closing()

		windowHora = Tk()
		windowHora.geometry(str(self.width)+'x'+str(self.height))
		windowHora.protocol("WM_DELETE_WINDOW", on_closing)
		dataAtual = Label(windowHora, text="Data atual:")
		dataAtual.pack()
		horaAtual = Label(windowHora, text="Hora atual:")
		horaAtual.pack()
		dataNova = Label(windowHora, text="Nova Data:")
		dataNova.pack()
		escrever_dataNova = Entry(width=20)
		escrever_dataNova.pack()
		horaNova = Label(windowHora, text="Hora Nova:")
		horaNova.pack()
		escrever_horaNova = Entry(width=20)
		escrever_horaNova.pack()

		buttonSave = Button(windowHora, text="Save", command=salvar_dados, width=10, height=2)
		buttonSave.pack(side=RIGHT)
		buttonCancel = Button(windowHora, text="Cancel", command=on_closing, width=10, height=2)
		buttonCancel.pack(side=LEFT)

		windowHora.mainloop()

	def ConfigFreq(self):
		def on_closing():
			windowFreq.destroy()
			self.ConfigMenu()

		def savefreq():
			salvarDados = Tk()
			salvarDados.geometry("100x60")
			dadosSalvos = Label(salvarDados, text="\nDados Salvos!")
			dadosSalvos.pack()
			on_closing()		

		windowFreq = Tk()
		windowFreq.geometry(str(self.width)+'x'+str(self.height))
		freqAtual = Label(windowFreq, text="Frequência atual:")
		freqAtual.pack()
		freqNova = Label(windowFreq, text="Frequência nova:")
		freqNova.pack()
		escrever_freqNova = Entry(windowFreq,width=20)
		escrever_freqNova.pack()

		buttonSave = Button(windowFreq, text="Save", command=savefreq, width=10, height=2)
		buttonSave.pack(side=RIGHT)
		buttonCancel = Button(windowFreq, text="Cancel", command=on_closing, width=10, height=2)
		buttonCancel.pack(side=LEFT)

		windowFreq.mainloop()

	def DataMenu(self):
		def on_closing():
			dataWindow.destroy()

		dataWindow = Tk()
		dataWindow.geometry(str(self.width)+'x'+str(self.height))
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

	def MainWindow(self):
		def clickConfig():
			mainFrame.destroy()
			self.ConfigMenu()
		def clickData():
			mainFrame.destroy()
			self.DataMenu()
		def on_closing():
			if msgbx.askokcancel("Quit", "Do you want to quit?"):
				quit()

		mainFrame = Tk()
		mainFrame.geometry(str(self.width)+'x'+str(self.height))
		mainFrame.title("Menu")
		#mainFrame.pack()
		buttonData = Button(mainFrame, text="Dados", command=clickData, width=30, height=3)
		buttonData.pack()
		buttonConfig = Button(mainFrame, text="Configurações", command=clickConfig, width=30, height=3)
		buttonConfig.pack()

		mainFrame.protocol("WM_DELETE_WINDOW", on_closing)
		mainFrame.mainloop()


Application()