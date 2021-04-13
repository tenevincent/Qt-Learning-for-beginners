import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    id: root

    property color bgcolor: "#5A6263"
    property color buttoncolor: "green"
    property color hovercolor: "limegreen"
    property color clickcolor: "yellow"
    property var size: 100

    Rectangle {
        id: background
        color: root.buttoncolor
        width: 100
        height: parent.height

        Column {
            id: column
            anchors.fill: parent

            HoverButton {
                width: 100
                height: 80
                title.text: "Cat"
                image.source: "qrc:/files/images/cat.jpg"
                color: root.buttoncolor
                hoverColor: root.hovercolor
                clickColor: root.clickcolor
                area.onPressed: image.source = "qrc:/files/images/cat.jpg"
            }
            HoverButton {
                width: 100
                height: 80
                title.text: "Dog"
                  image.source: "qrc:/files/images/dog.jpg"
                color: root.buttoncolor
                hoverColor: root.hovercolor
                clickColor: root.clickcolor
                area.onPressed: image.source = "qrc:/files/images/dog.jpg"
            }
            HoverButton {
                width: 100
                height: 80
                title.text: "Fish"
                 image.source: "qrc:/files/images/fish.jpg"
                color: root.buttoncolor
                hoverColor: root.hovercolor
                clickColor: root.clickcolor
                area.onPressed: image.source = "qrc:/files/images/fish.jpg"
            }


        }

    }

    Rectangle {
        id: rectangle
        color: root.bgcolor
        x: 100
        y: 0
        border.width: 3
        border.color: "white"
        width: parent.width - x
        height: parent.height
        anchors.left: background.right


        Image {
            id: image
            anchors.margins:  5
            anchors.fill: parent
            fillMode: Image.PreserveAspectFit
            source: "qrc:/files/images/logo.png"
        }

    }


}
