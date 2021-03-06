//- -----------------------------------------------------------------------------------------------------------------------
// AskSinAnalyzer
// 2019-06-01 jp112sdl Creative Commons - https://creativecommons.org/licenses/by-nc-sa/3.0/de/
// 2019-06-01 psi-4ward Creative Commons - https://creativecommons.org/licenses/by-nc-sa/3.0/de/
//- -----------------------------------------------------------------------------------------------------------------------

const char HTTP_INDEX[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="de">
  <head>
    <title>AskSinAnalyzer</title>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <meta name="msapplication-TileColor" content="#027be3">
    <meta name="theme-color" content="#027be3">
    <link rel="apple-touch-icon" sizes="180x180" href="https://jp112sdl.github.io/AskSinAnalyzer/{branch}/apple-touch-icon.png">
    <link rel="icon" type="image/png" sizes="32x32" href="https://jp112sdl.github.io/AskSinAnalyzer/{branch}/favicon-32x32.png">
    <link rel="icon" type="image/png" sizes="16x16" href="https://jp112sdl.github.io/AskSinAnalyzer/{branch}/favicon-16x16.png">
    <link rel="manifest" href="https://jp112sdl.github.io/AskSinAnalyzer/{branch}/site.webmanifest">
    <link rel="mask-icon" href="https://jp112sdl.github.io/AskSinAnalyzer/{branch}/safari-pinned-tab.svg" color="#027be3">
  </head>
  <body>
  <noscript>
    <strong>AskSinAnalyzer benötigt JavaScript!</strong>
  </noscript>
  <div id="app">
    <div style="margin: 2rem">
      <h1>AskSin Analyzer</h1>
      <div id="err" style="color:red;font-family:monospace"></div>
    </div>
  </div>

  <script>
    function logErr() {
      var el = document.getElementById('err');
      el.innerHTML = el.innerHTML + "<p><strong>Error: </strong>"
        + (this.src || this.href)
        + " konnte nicht geladen werden. <br>"
        + "Internet Einstellungen und Werbeblocker überprüfen.</p>"
    }
    var scriptEl = document.createElement('script');
    scriptEl.src = "https://jp112sdl.github.io/AskSinAnalyzer/{branch}/js/app.js";
    scriptEl.onerror = logErr;
    document.head.append(scriptEl);
    var cssEl = document.createElement('link');
    cssEl.href = "https://jp112sdl.github.io/AskSinAnalyzer/{branch}/css/app.css";
    cssEl.rel = "stylesheet";
    cssEl.onerror = logErr;
    document.head.append(cssEl);
  </script>
  </body>
</html>
)=====";
