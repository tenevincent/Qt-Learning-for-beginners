import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Grid{
        spacing: 5
        rows: 3
        columns: 3
        anchors.centerIn: parent
        CustomShape {color: "red"}
        CustomShape {color: "yellow"}
        CustomShape {color: "green"}
        CustomShape {color: "blue"}
        CustomShape {color: "black"}
        CustomShape {color: "orange"}
        CustomShape {color: "magenta"}
        CustomShape {color: "violet"}
        CustomShape {color: "darkgrey"}

    }
}
