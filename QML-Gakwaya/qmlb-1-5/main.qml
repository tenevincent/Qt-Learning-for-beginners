import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

//    TextInput{
//        text: "enter a number"
//        anchors.centerIn: parent
//        color: "red"
//        font.pointSize: 18
//    }

    Text{
        text: "Hello world"
        anchors.centerIn: parent
        color: "red"
        font.pointSize: 18

    }

    Component.onCompleted:{
        console.log("The component is loaded!x")
    }



}
