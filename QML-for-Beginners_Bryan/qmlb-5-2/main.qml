import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    property var midX: width / 2
    property var midY: height / 2


    Column {
        anchors.centerIn: parent
        spacing: 2

        CustomShape{
            color: "red"
            x: midX - (width / 2)
            y: midY - (height / 2) - 30
        }

        CustomShape{
            color: "green"
            x: midX - (width / 2) - 55
            y: midY - (height / 2) + 30
        }

        CustomShape{
            color: "blue"
            x: midX - (width / 2) + 55
            y: midY - (height / 2) + 30
        }

    }





}
