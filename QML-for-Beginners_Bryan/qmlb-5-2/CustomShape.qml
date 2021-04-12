import QtQuick 2.0


Rectangle {
    id:myrectangle
    color: "gray"
    width: 100
    height: 100

    Text {
        id: name
        text: myrectangle.x + " x " + myrectangle.y
        anchors.centerIn: parent
        font.pointSize: 13
    }

    MouseArea {
        anchors.fill: parent
        drag.target: parent
        onClicked: parent.z++
    }

}
