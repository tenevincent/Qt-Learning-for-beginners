import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    CustomShape {
          id: shareCentral
          anchors.centerIn: parent

          text: "Center"

          Rectangle {
              width: 25
              height: 25
              color: "pink"
              //no anchor by default
              //anchors.centerIn: parent
              //anchors.fill: parent
              anchors.right: parent.right
              anchors.bottom: parent.left
          }
      }



    CustomShape {
        id: shapeTop
        text: "Top"
        color: "green"
        anchors.bottom: shareCentral.top
        anchors.left: shareCentral.left
    }


    CustomShape {
        id: shapeBottom
        text: "Bottom"
        color: "blue"
        anchors.top: shareCentral.bottom
        anchors.left: shareCentral.left
    }

    CustomShape {
        id: shapeLeft
        text: "Left"
        color: "red"
        anchors.top: shareCentral.top
        anchors.right: shareCentral.left
    }

    CustomShape {
        id: shapeRight
        text: "Right"
        color: "yellow"
        anchors.top: shareCentral.top
        anchors.left: shareCentral.right
    }


}
