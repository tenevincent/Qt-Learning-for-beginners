import sys

from PyQt5.QtGui import QIcon
from PyQt5.QtWidgets import QAction, QStatusBar, QCheckBox, QComboBox
from PyQt5.QtWidgets import QApplication, QLabel, QMainWindow, QToolBar
from PyQt5.QtCore import Qt

# Subclass QMainWindow to customise your application's main window
class MainWindow(QMainWindow):

    def __init__(self, *args, **kwargs):
        super(MainWindow, self).__init__(*args, **kwargs)

        self.setWindowTitle("My Awesome App")

        label = QLabel("This is a PyQt5 window!")

        # The `Qt` namespace has a lot of attributes to customise
        # widgets. See: http://doc.qt.io/qt-5/qt.html
        label.setAlignment(Qt.AlignCenter)

        # Set the central widget of the Window. Widget will expand
        # to take up all the space in the window by default.
        self.setCentralWidget(label)

        menu = self.menuBar()
        file_menu = menu.addMenu("&File")

        toolbar = QToolBar("My main toolbar")
        self.addToolBar(toolbar)

        action_name = "File"
        icon_name  ="app.png"
        status_tooltip = "File"

        self.add_an_action(action_name, icon_name, status_tooltip, toolbar, file_menu)

        action_name = "Edit"
        icon_name  ="edit.png"
        status_tooltip = "Edit"
        self.add_an_action(action_name, icon_name, status_tooltip, toolbar, file_menu)

        action_name = "Copy"
        icon_name  ="copy.png"
        status_tooltip = "Copy"
        self.add_an_action(action_name, icon_name, status_tooltip, toolbar, file_menu)

        action_name = "Delete"
        icon_name  ="delete.png"
        status_tooltip = "Delete"
        self.add_an_action(action_name, icon_name, status_tooltip, toolbar, file_menu)

        file_menu.addMenu("&SubItem")

        toolbar.addWidget(QLabel("Hello"))

        checkbox = QCheckBox()
        checkbox.setText("Select")
        toolbar.addWidget(checkbox)

        combobox = QComboBox()
        combobox.addItem("Banane")
        combobox.addItem("Mango")
        combobox.addItem("Orange")
        combobox.addItem("Clementine")
        combobox.addItem("Banane")
        toolbar.addWidget(combobox)

        button_sub = QAction("Open", self)
        button_sub.setStatusTip("This is your button")
        button_sub.triggered.connect(self.onMyToolBarButtonClick)
        #button_action.addAction(button_sub)

        self.setWindowIcon(QIcon("app.png"))
        self.setStatusBar(QStatusBar(self))





    def add_an_action(self, action_name, icon_name, status_tooltip, toolbar, file_menu):
        button_action = QAction(action_name, self)
        button_action.setIcon(QIcon(icon_name))
        button_action.setStatusTip(status_tooltip)
        button_action.triggered.connect(self.onMyToolBarButtonClick)
        button_action.setCheckable(True)
        toolbar.addAction(button_action)

        file_menu.addAction(button_action)
        file_menu.addSeparator()

    def onMyToolBarButtonClick(self, s):
        print("click", s)

app = QApplication(sys.argv)

window = MainWindow()
window.show()

app.exec_()
