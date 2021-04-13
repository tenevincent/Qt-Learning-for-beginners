import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id:rootId
    width: 640
    height: 480
    visible: true
    title: qsTr("QML Syntax Demo")

    property  string textToDisplay: "TEXT"

    Row {
        id:rowId
        anchors.centerIn: parent
        spacing: 20

        Rectangle{
            id:redRectangleId
            width: 150; height:  150
            color: "red"
            radius: 20
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log("Click on the red rectangle!")
                    textToDisplay = "red"
                }
            }
        }



        Rectangle{
            id:greenRectangleId
            width: 150; height:  150
            color: "green"
            radius: 20
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log("Click on the green rectangle!")
                     textToDisplay = "green"
                }
            }
        }




        Rectangle{
            id:blueRectangleId
            width: 150; height:  150
            color: "blue"
            radius: 20
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log("Click on the blue rectangle!")
                    textToDisplay = "blue"
                }
            }
        }


        Rectangle{
            id:circleRectangleId
            width: 150; height:  150
            color: "dodgerblue"
            radius: 100
            Text {
                id:textId
             anchors.centerIn: parent
             text: textToDisplay
            }
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log("Click on the dodgerblue rectangle!")
                     textToDisplay = "dodgerblue"
                    textId.text = "Static Text"
                }
            }
        }



    }
}
