import QtQuick 2.0

Item {
    id: root
    property color color: "gray"
    property string text: "title"

    width: 100
    height: 100
     anchors.margins: 2 // This is how the margin is set!


    Rectangle {
        color: root.color
        anchors.fill: parent
//        anchors.leftMargin: 2
//        anchors.rightMargin: 2
//        anchors.bottomMargin: 0


        Text {
            text: root.text
            anchors.centerIn: parent
        }

        MouseArea {
            anchors.fill: parent
            drag.target: root.parent
            onPressed: root.z++
        }
    }


}
