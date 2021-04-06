import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Image {
        id: image
        source: "qrc:/images/Qt_logo_2016.svg"
        anchors.centerIn: parent
        width: 150
        height: 100

        Rectangle{
            color: "red"
            width: parent.width
            height: 50
            opacity: 0.5
            parent: image
        }
    }

    TextInput{
        id:mytextInput
        text:"Hello world"
        font.bold: true
        font.pixelSize: 20
        font.weight: Font.Medium
        anchors.centerIn: parent
    }

    Text{
        id:myText
        text: mytextInput.text
    }

}
