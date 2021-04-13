import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id:rootId
    width: 640
    height: 480
    visible: true
    title: qsTr("QML Syntax Demo")

    property  string textToDisplay: "TEXT"
    property  int minInteger: 45
    property bool boolValue: false
    property double mDoubleValue: 45.5
    property int enumValue: redRectangleId.baseline
    property  url mUrl: "https://www.google.com"


    Rectangle{
        id:redRectangleId
        width: 150; height:  150
        color: "red"
        radius: 20
        anchors.centerIn: parent
        MouseArea{
            anchors.fill: parent
            onClicked: {
                console.log(`The value is ${textToDisplay} `)
                console.log(`The value of the integer is ${minInteger} `)
                console.log(`The bool value  is ${boolValue} `)
                console.log(`The double value  is ${mDoubleValue} `)
                console.log(`The enum value  is ${enumValue} `)
                console.log(`The url value  is ${mUrl} `)


                textToDisplay = "red"
            }
        }
    }






}
