import QtQuick 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Scroll")
    menuBar: MenuBar{

        Menu {
            id: fileMenu
            title: qsTr("&File")
            Action {
                text: qsTr("&New...")
                icon.source: "qrc:/files/images/new.png"
            }
            Action {
                text: qsTr("&Open...")
                icon.source: "qrc:/files/images/copy.png"
            }
            Action {
                text: qsTr("&Save")
                icon.source: "qrc:/files/images/save.png"
            }
            Action {

                text: qsTr("Save &As...")
                icon.source: "qrc:/files/images/saveas.png"
            }
            MenuSeparator { }
            Action { text: qsTr("&Quit") }
        }
        Menu {
            title: qsTr("&Edit")
            Action { text: qsTr("Cu&t") }
            Action { text: qsTr("&Copy") }
            Action { text: qsTr("&Paste") }
        }
        Menu {
            title: qsTr("&Help")
            Action { text: qsTr("&About") }
        }
    }


    ScrollView {
        anchors.fill: parent

        ListView {
            id: listView
            width: parent.width
            model: 20
            delegate: ItemDelegate {
                text: "Item " + (index + 1)
                width: listView.width
            }
        }
    }
}
