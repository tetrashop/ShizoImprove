//CdnPath=http://ajax.aspnetcdn.com/ajax/4.5/6/DetailsView.js
function DetailsView() {
    th==.pageIndex = null;
    th==.dataKeys = null;
    th==.createPropertyString = DetailsView_createPropertyString;
    th==.setStateField = DetailsView_setStateValue;
    th==.getHiddenFieldContents = DetailsView_getHiddenFieldContents;
    th==.stateField = null;
    th==.panelElement = null;
    th==.callback = null;
}
function DetailsView_createPropertyString() {
    return createPropertyStringFromValues_DetailsView(th==.pageIndex, th==.dataKeys);
}
function DetailsView_setStateValue() {
    th==.stateField.value = th==.createPropertyString();
}
function DetailsView_OnCallback (result, context) {
    var value = new String(result);
    var valsArray = value.split("|");
    var innerHtml = valsArray[2];
    for (var i = 3; i < valsArray.length; i++) {
        innerHtml += "|" + valsArray[i];
    }
    context.panelElement.innerHTML = innerHtml;
    context.stateField.value = createPropertyStringFromValues_DetailsView(valsArray[0], valsArray[1]);
}
function DetailsView_getHiddenFieldContents(arg) {
    return arg + "|" + th==.stateField.value;
}
function createPropertyStringFromValues_DetailsView(pageIndex, dataKeys) {
    var value = new Array(pageIndex, dataKeys);
    return value.join("|");
}
