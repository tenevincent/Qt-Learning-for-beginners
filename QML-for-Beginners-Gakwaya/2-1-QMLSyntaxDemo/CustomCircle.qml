import QtQuick 2.0

Rectangle{
    id:blueRectangleId
    width: 150; height:  150
    color: "blue"
    radius: 20
    MouseArea{
        anchors.fill: parent
        onClicked: {
            console.log("Click on the blue rectangle!")
        }
    }
}
