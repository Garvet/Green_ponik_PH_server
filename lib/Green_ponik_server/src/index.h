#ifndef INDEX_H
#define INDEX_H

#include <Arduino.h>

const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
	<style>
		.card {
			max-width: 300px;
			min-height: 400px;
			background: #02b875;
			padding: 30px;
			box-sizing: border-box;
			color: #FFF;
			margin: 20px;
			box-shadow: 0px 2px 18px -4px rgba(0,0,0,0.75);
		}
	</style>

	<body>
		<div class="card">
			<h1>Green ponik</h1><br>
			Voltage: <span id="voltage_value"></span><br>
			Temp: <span id="temperature_value"></span><br>
			PH: <span id="pH_value"></span><br>
		</div>

		<script>
			var timerId;

			function get_ph() {
				var xhttp = new XMLHttpRequest();
				xhttp.onreadystatechange = function() {
					if (this.readyState == 4 && this.status == 200) {
						let data_js = JSON.parse(this.responseText);
						//document.getElementById("TempValue").innerHTML =
						//this.responseText;
						document.getElementById("voltage_value").innerHTML = data_js.DFRobot_PH.voltage;
						document.getElementById("temperature_value").innerHTML = data_js.DFRobot_PH.temperature;
						document.getElementById("pH_value").innerHTML = data_js.DFRobot_PH.pH;
					}
				};
				xhttp.open("GET", "get_ph", true);
				xhttp.send();
			}

			function start_interval() {
				get_ph();
				timerId = setInterval(get_ph, 1000); //1000mSeconds update rate
			}

			start_interval();

		</script>
	</body>
</html>
)=====";


const char ERR_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
	<style>
	</style>
	<body>
		<h1>Error: 404 - not found.<h1>
	</body>
</html>
)=====";


#endif //INDEX_H



















#ifdef INDEX_H1
#define INDEX_H1

#include <Arduino.h>

const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
   <meta charset="utf-8" />

   	<style>
	   :root {
  --blue: #007bff;
  --indigo: #6610f2;
  --purple: #6f42c1;
  --pink: #e83e8c;
  --red: #dc3545;
  --orange: #fd7e14;
  --yellow: #ffc107;
  --green: #28a745;
  --teal: #20c997;
  --cyan: #17a2b8;
  --white: #fff;
  --gray: #6c757d;
  --gray-dark: #343a40;
  --primary: #007bff;
  --secondary: #6c757d;
  --success: #28a745;
  --info: #17a2b8;
  --warning: #ffc107;
  --danger: #dc3545;
  --light: #f8f9fa;
  --dark: #343a40;
  --breakpoint-xs: 0;
  --breakpoint-sm: 576px;
  --breakpoint-md: 768px;
  --breakpoint-lg: 992px;
  --breakpoint-xl: 1200px;
  --font-family-sans-serif: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, "Helvetica Neue", Arial, "Noto Sans", sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol", "Noto Color Emoji";
  --font-family-monospace: SFMono-Regular, Menlo, Monaco, Consolas, "Liberation Mono", "Courier New", monospace; }

*,
*::before,
*::after {
  box-sizing: border-box; }

html {
  font-family: sans-serif;
  line-height: 1.15;
  -webkit-text-size-adjust: 100%;
  -webkit-tap-highlight-color: rgba(0, 0, 0, 0); }

article, aside, figcaption, figure, footer, header, hgroup, main, nav, section {
  display: block; }

body {
  margin: 0;
  font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, "Helvetica Neue", Arial, "Noto Sans", sans-serif, "Apple Color Emoji", "Segoe UI Emoji", "Segoe UI Symbol", "Noto Color Emoji";
  font-size: 1rem;
  font-weight: 400;
  line-height: 1.5;
  color: #212529;
  text-align: left;
  background-color: #fff; }

[tabindex="-1"]:focus {
  outline: 0 !important; }

hr {
  box-sizing: content-box;
  height: 0;
  overflow: visible; }

h1, h2, h3, h4, h5, h6 {
  margin-top: 0;
  margin-bottom: 0.5rem; }

p {
  margin-top: 0;
  margin-bottom: 1rem; }

abbr[title],
abbr[data-original-title] {
  text-decoration: underline;
  text-decoration: underline dotted;
  cursor: help;
  border-bottom: 0;
  text-decoration-skip-ink: none; }

address {
  margin-bottom: 1rem;
  font-style: normal;
  line-height: inherit; }

ol,
ul,
dl {
  margin-top: 0;
  margin-bottom: 1rem; }

ol ol,
ul ul,
ol ul,
ul ol {
  margin-bottom: 0; }

dt {
  font-weight: 700; }

dd {
  margin-bottom: .5rem;
  margin-left: 0; }

blockquote {
  margin: 0 0 1rem; }

b,
strong {
  font-weight: bolder; }

small {
  font-size: 80%; }

sub,
sup {
  position: relative;
  font-size: 75%;
  line-height: 0;
  vertical-align: baseline; }

sub {
  bottom: -.25em; }

sup {
  top: -.5em; }

a {
  color: #007bff;
  text-decoration: none;
  background-color: transparent; }
  a:hover {
    color: #0056b3;
    text-decoration: underline; }

a:not([href]):not([tabindex]) {
  color: inherit;
  text-decoration: none; }
  a:not([href]):not([tabindex]):hover, a:not([href]):not([tabindex]):focus {
    color: inherit;
    text-decoration: none; }
  a:not([href]):not([tabindex]):focus {
    outline: 0; }

pre,
code,
kbd,
samp {
  font-family: SFMono-Regular, Menlo, Monaco, Consolas, "Liberation Mono", "Courier New", monospace;
  font-size: 1em; }

pre {
  margin-top: 0;
  margin-bottom: 1rem;
  overflow: auto; }

figure {
  margin: 0 0 1rem; }

img {
  vertical-align: middle;
  border-style: none; }

svg {
  overflow: hidden;
  vertical-align: middle; }

table {
  border-collapse: collapse; }

caption {
  padding-top: 0.75rem;
  padding-bottom: 0.75rem;
  color: #6c757d;
  text-align: left;
  caption-side: bottom; }

th {
  text-align: inherit; }

label {
  display: inline-block;
  margin-bottom: 0.5rem; }

button {
  border-radius: 0; }

button:focus {
  outline: 1px dotted;
  outline: 5px auto -webkit-focus-ring-color; }

input,
button,
select,
optgroup,
textarea {
  margin: 0;
  font-family: inherit;
  font-size: inherit;
  line-height: inherit; }

button,
input {
  overflow: visible; }

button,
select {
  text-transform: none; }

select {
  word-wrap: normal; }

button,
[type="button"],
[type="reset"],
[type="submit"] {
  -webkit-appearance: button; }

button:not(:disabled),
[type="button"]:not(:disabled),
[type="reset"]:not(:disabled),
[type="submit"]:not(:disabled) {
  cursor: pointer; }

button::-moz-focus-inner,
[type="button"]::-moz-focus-inner,
[type="reset"]::-moz-focus-inner,
[type="submit"]::-moz-focus-inner {
  padding: 0;
  border-style: none; }

input[type="radio"],
input[type="checkbox"] {
  box-sizing: border-box;
  padding: 0; }

input[type="date"],
input[type="time"],
input[type="datetime-local"],
input[type="month"] {
  -webkit-appearance: listbox; }

textarea {
  overflow: auto;
  resize: vertical; }

fieldset {
  min-width: 0;
  padding: 0;
  margin: 0;
  border: 0; }

legend {
  display: block;
  width: 100%;
  max-width: 100%;
  padding: 0;
  margin-bottom: .5rem;
  font-size: 1.5rem;
  line-height: inherit;
  color: inherit;
  white-space: normal; }

progress {
  vertical-align: baseline; }

[type="number"]::-webkit-inner-spin-button,
[type="number"]::-webkit-outer-spin-button {
  height: auto; }

[type="search"] {
  outline-offset: -2px;
  -webkit-appearance: none; }

[type="search"]::-webkit-search-decoration {
  -webkit-appearance: none; }

::-webkit-file-upload-button {
  font: inherit;
  -webkit-appearance: button; }

output {
  display: inline-block; }

summary {
  display: list-item;
  cursor: pointer; }

template {
  display: none; }

[hidden] {
  display: none !important; }

h1, h2, h3, h4, h5, h6,
.h1, .h2, .h3, .h4, .h5, .h6 {
  margin-bottom: 0.5rem;
  font-weight: 500;
  line-height: 1.2; }

h1, .h1 {
  font-size: 2.5rem; }

h2, .h2 {
  font-size: 2rem; }

h3, .h3 {
  font-size: 1.75rem; }

h4, .h4 {
  font-size: 1.5rem; }

h5, .h5 {
  font-size: 1.25rem; }

h6, .h6 {
  font-size: 1rem; }

.lead {
  font-size: 1.25rem;
  font-weight: 300; }

.display-1 {
  font-size: 6rem;
  font-weight: 300;
  line-height: 1.2; }

.display-2 {
  font-size: 5.5rem;
  font-weight: 300;
  line-height: 1.2; }

.display-3 {
  font-size: 4.5rem;
  font-weight: 300;
  line-height: 1.2; }

.display-4 {
  font-size: 3.5rem;
  font-weight: 300;
  line-height: 1.2; }

hr {
  margin-top: 1rem;
  margin-bottom: 1rem;
  border: 0;
  border-top: 1px solid rgba(0, 0, 0, 0.1); }

small,
.small {
  font-size: 80%;
  font-weight: 400; }

mark,
.mark {
  padding: 0.2em;
  background-color: #fcf8e3; }

.list-unstyled {
  padding-left: 0;
  list-style: none; }

.list-inline {
  padding-left: 0;
  list-style: none; }

.list-inline-item {
  display: inline-block; }
  .list-inline-item:not(:last-child) {
    margin-right: 0.5rem; }

.initialism {
  font-size: 90%;
  text-transform: uppercase; }

.blockquote {
  margin-bottom: 1rem;
  font-size: 1.25rem; }

.blockquote-footer {
  display: block;
  font-size: 80%;
  color: #6c757d; }
  .blockquote-footer::before {
    content: "\2014\00A0"; }

.img-fluid {
  max-width: 100%;
  height: auto; }

.img-thumbnail {
  padding: 0.25rem;
  background-color: #fff;
  border: 1px solid #dee2e6;
  border-radius: 0.25rem;
  max-width: 100%;
  height: auto; }

.figure {
  display: inline-block; }

.figure-img {
  margin-bottom: 0.5rem;
  line-height: 1; }

.figure-caption {
  font-size: 90%;
  color: #6c757d; }

code {
  font-size: 87.5%;
  color: #e83e8c;
  word-break: break-word; }
  a > code {
    color: inherit; }

kbd {
  padding: 0.2rem 0.4rem;
  font-size: 87.5%;
  color: #fff;
  background-color: #212529;
  border-radius: 0.2rem; }
  kbd kbd {
    padding: 0;
    font-size: 100%;
    font-weight: 700; }

pre {
  display: block;
  font-size: 87.5%;
  color: #212529; }
  pre code {
    font-size: inherit;
    color: inherit;
    word-break: normal; }

.pre-scrollable {
  max-height: 340px;
  overflow-y: scroll; }

.container {
  width: 100%;
  padding-right: 15px;
  padding-left: 15px;
  margin-right: auto;
  margin-left: auto; }
  @media (min-width: 576px) {
    .container {
      max-width: 540px; } }
  @media (min-width: 768px) {
    .container {
      max-width: 720px; } }
  @media (min-width: 992px) {
    .container {
      max-width: 960px; } }
  @media (min-width: 1200px) {
    .container {
      max-width: 1140px; } }
.container-fluid {
  width: 100%;
  padding-right: 15px;
  padding-left: 15px;
  margin-right: auto;
  margin-left: auto; }

.row {
  display: flex;
  flex-wrap: wrap;
  margin-right: -15px;
  margin-left: -15px; }

.no-gutters {
  margin-right: 0;
  margin-left: 0; }
  .no-gutters > .col,
  .no-gutters > [class*="col-"] {
    padding-right: 0;
    padding-left: 0; }

.col-1, .col-2, .col-3, .col-4, .col-5, .col-6, .col-7, .col-8, .col-9, .col-10, .col-11, .col-12, .col,
.col-auto, .col-sm-1, .col-sm-2, .col-sm-3, .col-sm-4, .col-sm-5, .col-sm-6, .col-sm-7, .col-sm-8, .col-sm-9, .col-sm-10, .col-sm-11, .col-sm-12, .col-sm,
.col-sm-auto, .col-md-1, .col-md-2, .col-md-3, .col-md-4, .col-md-5, .col-md-6, .col-md-7, .col-md-8, .col-md-9, .col-md-10, .col-md-11, .col-md-12, .col-md,
.col-md-auto, .col-lg-1, .col-lg-2, .col-lg-3, .col-lg-4, .col-lg-5, .col-lg-6, .col-lg-7, .col-lg-8, .col-lg-9, .col-lg-10, .col-lg-11, .col-lg-12, .col-lg,
.col-lg-auto, .col-xl-1, .col-xl-2, .col-xl-3, .col-xl-4, .col-xl-5, .col-xl-6, .col-xl-7, .col-xl-8, .col-xl-9, .col-xl-10, .col-xl-11, .col-xl-12, .col-xl,
.col-xl-auto {
  position: relative;
  width: 100%;
  padding-right: 15px;
  padding-left: 15px; }

.col {
  flex-basis: 0;
  flex-grow: 1;
  max-width: 100%; }

.col-auto {
  flex: 0 0 auto;
  width: auto;
  max-width: 100%; }

.col-1 {
  flex: 0 0 8.33333%;
  max-width: 8.33333%; }

.col-2 {
  flex: 0 0 16.66667%;
  max-width: 16.66667%; }

.col-3 {
  flex: 0 0 25%;
  max-width: 25%; }

.col-4 {
  flex: 0 0 33.33333%;
  max-width: 33.33333%; }

.col-5 {
  flex: 0 0 41.66667%;
  max-width: 41.66667%; }

.col-6 {
  flex: 0 0 50%;
  max-width: 50%; }

.col-7 {
  flex: 0 0 58.33333%;
  max-width: 58.33333%; }

.col-8 {
  flex: 0 0 66.66667%;
  max-width: 66.66667%; }

.col-9 {
  flex: 0 0 75%;
  max-width: 75%; }

.col-10 {
  flex: 0 0 83.33333%;
  max-width: 83.33333%; }

.col-11 {
  flex: 0 0 91.66667%;
  max-width: 91.66667%; }

.col-12 {
  flex: 0 0 100%;
  max-width: 100%; }

.order-first {
  order: -1; }

.order-last {
  order: 13; }

.order-0 {
  order: 0; }

.order-1 {
  order: 1; }

.order-2 {
  order: 2; }

.order-3 {
  order: 3; }

.order-4 {
  order: 4; }

.order-5 {
  order: 5; }

.order-6 {
  order: 6; }

.order-7 {
  order: 7; }

.order-8 {
  order: 8; }

.order-9 {
  order: 9; }

.order-10 {
  order: 10; }

.order-11 {
  order: 11; }

.order-12 {
  order: 12; }

.offset-1 {
  margin-left: 8.33333%; }

.offset-2 {
  margin-left: 16.66667%; }

.offset-3 {
  margin-left: 25%; }

.offset-4 {
  margin-left: 33.33333%; }

.offset-5 {
  margin-left: 41.66667%; }

.offset-6 {
  margin-left: 50%; }

.offset-7 {
  margin-left: 58.33333%; }

.offset-8 {
  margin-left: 66.66667%; }

.offset-9 {
  margin-left: 75%; }

.offset-10 {
  margin-left: 83.33333%; }

.offset-11 {
  margin-left: 91.66667%; }

@media (min-width: 576px) {
  .col-sm {
    flex-basis: 0;
    flex-grow: 1;
    max-width: 100%; }
  .col-sm-auto {
    flex: 0 0 auto;
    width: auto;
    max-width: 100%; }
  .col-sm-1 {
    flex: 0 0 8.33333%;
    max-width: 8.33333%; }
  .col-sm-2 {
    flex: 0 0 16.66667%;
    max-width: 16.66667%; }
  .col-sm-3 {
    flex: 0 0 25%;
    max-width: 25%; }
  .col-sm-4 {
    flex: 0 0 33.33333%;
    max-width: 33.33333%; }
  .col-sm-5 {
    flex: 0 0 41.66667%;
    max-width: 41.66667%; }
  .col-sm-6 {
    flex: 0 0 50%;
    max-width: 50%; }
  .col-sm-7 {
    flex: 0 0 58.33333%;
    max-width: 58.33333%; }
  .col-sm-8 {
    flex: 0 0 66.66667%;
    max-width: 66.66667%; }
  .col-sm-9 {
    flex: 0 0 75%;
    max-width: 75%; }
  .col-sm-10 {
    flex: 0 0 83.33333%;
    max-width: 83.33333%; }
  .col-sm-11 {
    flex: 0 0 91.66667%;
    max-width: 91.66667%; }
  .col-sm-12 {
    flex: 0 0 100%;
    max-width: 100%; }
  .order-sm-first {
    order: -1; }
  .order-sm-last {
    order: 13; }
  .order-sm-0 {
    order: 0; }
  .order-sm-1 {
    order: 1; }
  .order-sm-2 {
    order: 2; }
  .order-sm-3 {
    order: 3; }
  .order-sm-4 {
    order: 4; }
  .order-sm-5 {
    order: 5; }
  .order-sm-6 {
    order: 6; }
  .order-sm-7 {
    order: 7; }
  .order-sm-8 {
    order: 8; }
  .order-sm-9 {
    order: 9; }
  .order-sm-10 {
    order: 10; }
  .order-sm-11 {
    order: 11; }
  .order-sm-12 {
    order: 12; }
  .offset-sm-0 {
    margin-left: 0; }
  .offset-sm-1 {
    margin-left: 8.33333%; }
  .offset-sm-2 {
    margin-left: 16.66667%; }
  .offset-sm-3 {
    margin-left: 25%; }
  .offset-sm-4 {
    margin-left: 33.33333%; }
  .offset-sm-5 {
    margin-left: 41.66667%; }
  .offset-sm-6 {
    margin-left: 50%; }
  .offset-sm-7 {
    margin-left: 58.33333%; }
  .offset-sm-8 {
    margin-left: 66.66667%; }
  .offset-sm-9 {
    margin-left: 75%; }
  .offset-sm-10 {
    margin-left: 83.33333%; }
  .offset-sm-11 {
    margin-left: 91.66667%; } }

@media (min-width: 768px) {
  .col-md {
    flex-basis: 0;
    flex-grow: 1;
    max-width: 100%; }
  .col-md-auto {
    flex: 0 0 auto;
    width: auto;
    max-width: 100%; }
  .col-md-1 {
    flex: 0 0 8.33333%;
    max-width: 8.33333%; }
  .col-md-2 {
    flex: 0 0 16.66667%;
    max-width: 16.66667%; }
  .col-md-3 {
    flex: 0 0 25%;
    max-width: 25%; }
  .col-md-4 {
    flex: 0 0 33.33333%;
    max-width: 33.33333%; }
  .col-md-5 {
    flex: 0 0 41.66667%;
    max-width: 41.66667%; }
  .col-md-6 {
    flex: 0 0 50%;
    max-width: 50%; }
  .col-md-7 {
    flex: 0 0 58.33333%;
    max-width: 58.33333%; }
  .col-md-8 {
    flex: 0 0 66.66667%;
    max-width: 66.66667%; }
  .col-md-9 {
    flex: 0 0 75%;
    max-width: 75%; }
  .col-md-10 {
    flex: 0 0 83.33333%;
    max-width: 83.33333%; }
  .col-md-11 {
    flex: 0 0 91.66667%;
    max-width: 91.66667%; }
  .col-md-12 {
    flex: 0 0 100%;
    max-width: 100%; }
  .order-md-first {
    order: -1; }
  .order-md-last {
    order: 13; }
  .order-md-0 {
    order: 0; }
  .order-md-1 {
    order: 1; }
  .order-md-2 {
    order: 2; }
  .order-md-3 {
    order: 3; }
  .order-md-4 {
    order: 4; }
  .order-md-5 {
    order: 5; }
  .order-md-6 {
    order: 6; }
  .order-md-7 {
    order: 7; }
  .order-md-8 {
    order: 8; }
  .order-md-9 {
    order: 9; }
  .order-md-10 {
    order: 10; }
  .order-md-11 {
    order: 11; }
  .order-md-12 {
    order: 12; }
  .offset-md-0 {
    margin-left: 0; }
  .offset-md-1 {
    margin-left: 8.33333%; }
  .offset-md-2 {
    margin-left: 16.66667%; }
  .offset-md-3 {
    margin-left: 25%; }
  .offset-md-4 {
    margin-left: 33.33333%; }
  .offset-md-5 {
    margin-left: 41.66667%; }
  .offset-md-6 {
    margin-left: 50%; }
  .offset-md-7 {
    margin-left: 58.33333%; }
  .offset-md-8 {
    margin-left: 66.66667%; }
  .offset-md-9 {
    margin-left: 75%; }
  .offset-md-10 {
    margin-left: 83.33333%; }
  .offset-md-11 {
    margin-left: 91.66667%; } }

@media (min-width: 992px) {
  .col-lg {
    flex-basis: 0;
    flex-grow: 1;
    max-width: 100%; }
  .col-lg-auto {
    flex: 0 0 auto;
    width: auto;
    max-width: 100%; }
  .col-lg-1 {
    flex: 0 0 8.33333%;
    max-width: 8.33333%; }
  .col-lg-2 {
    flex: 0 0 16.66667%;
    max-width: 16.66667%; }
  .col-lg-3 {
    flex: 0 0 25%;
    max-width: 25%; }
  .col-lg-4 {
    flex: 0 0 33.33333%;
    max-width: 33.33333%; }
  .col-lg-5 {
    flex: 0 0 41.66667%;
    max-width: 41.66667%; }
  .col-lg-6 {
    flex: 0 0 50%;
    max-width: 50%; }
  .col-lg-7 {
    flex: 0 0 58.33333%;
    max-width: 58.33333%; }
  .col-lg-8 {
    flex: 0 0 66.66667%;
    max-width: 66.66667%; }
  .col-lg-9 {
    flex: 0 0 75%;
    max-width: 75%; }
  .col-lg-10 {
    flex: 0 0 83.33333%;
    max-width: 83.33333%; }
  .col-lg-11 {
    flex: 0 0 91.66667%;
    max-width: 91.66667%; }
  .col-lg-12 {
    flex: 0 0 100%;
    max-width: 100%; }
  .order-lg-first {
    order: -1; }
  .order-lg-last {
    order: 13; }
  .order-lg-0 {
    order: 0; }
  .order-lg-1 {
    order: 1; }
  .order-lg-2 {
    order: 2; }
  .order-lg-3 {
    order: 3; }
  .order-lg-4 {
    order: 4; }
  .order-lg-5 {
    order: 5; }
  .order-lg-6 {
    order: 6; }
  .order-lg-7 {
    order: 7; }
  .order-lg-8 {
    order: 8; }
  .order-lg-9 {
    order: 9; }
  .order-lg-10 {
    order: 10; }
  .order-lg-11 {
    order: 11; }
  .order-lg-12 {
    order: 12; }
  .offset-lg-0 {
    margin-left: 0; }
  .offset-lg-1 {
    margin-left: 8.33333%; }
  .offset-lg-2 {
    margin-left: 16.66667%; }
  .offset-lg-3 {
    margin-left: 25%; }
  .offset-lg-4 {
    margin-left: 33.33333%; }
  .offset-lg-5 {
    margin-left: 41.66667%; }
  .offset-lg-6 {
    margin-left: 50%; }
  .offset-lg-7 {
    margin-left: 58.33333%; }
  .offset-lg-8 {
    margin-left: 66.66667%; }
  .offset-lg-9 {
    margin-left: 75%; }
  .offset-lg-10 {
    margin-left: 83.33333%; }
  .offset-lg-11 {
    margin-left: 91.66667%; } }

.was-validated textarea.form-control:invalid, textarea.form-control.is-invalid {
  padding-right: calc(1.5em + 0.75rem);
  background-position: top calc(0.375em + 0.1875rem) right calc(0.375em + 0.1875rem); }

.was-validated .custom-select:invalid, .custom-select.is-invalid {
  border-color: #dc3545;
  padding-right: calc((1em + 0.75rem) * 3 / 4 + 1.75rem);
  background: url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' viewBox='0 0 4 5'%3e%3cpath fill='%23343a40' d='M2 0L0 2h4zm0 5L0 3h4z'/%3e%3c/svg%3e") no-repeat right 0.75rem center/8px 10px, url("data:image/svg+xml,%3csvg xmlns='http://www.w3.org/2000/svg' fill='%23dc3545' viewBox='-2 -2 7 7'%3e%3cpath stroke='%23dc3545' d='M0 0l3 3m0-3L0 3'/%3e%3ccircle r='.5'/%3e%3ccircle cx='3' r='.5'/%3e%3ccircle cy='3' r='.5'/%3e%3ccircle cx='3' cy='3' r='.5'/%3e%3c/svg%3E") #fff no-repeat center right 1.75rem/calc(0.75em + 0.375rem) calc(0.75em + 0.375rem); }
  .was-validated .custom-select:invalid:focus, .custom-select.is-invalid:focus {
    border-color: #dc3545;
    box-shadow: 0 0 0 0.2rem rgba(220, 53, 69, 0.25); }
  .was-validated .custom-select:invalid ~ .invalid-feedback,
  .was-validated .custom-select:invalid ~ .invalid-tooltip, .custom-select.is-invalid ~ .invalid-feedback,
  .custom-select.is-invalid ~ .invalid-tooltip {
    display: block; }

.was-validated .form-control-file:invalid ~ .invalid-feedback,
.was-validated .form-control-file:invalid ~ .invalid-tooltip, .form-control-file.is-invalid ~ .invalid-feedback,
.form-control-file.is-invalid ~ .invalid-tooltip {
  display: block; }

.was-validated .form-check-input:invalid ~ .form-check-label, .form-check-input.is-invalid ~ .form-check-label {
  color: #dc3545; }

.was-validated .form-check-input:invalid ~ .invalid-feedback,
.was-validated .form-check-input:invalid ~ .invalid-tooltip, .form-check-input.is-invalid ~ .invalid-feedback,
.form-check-input.is-invalid ~ .invalid-tooltip {
  display: block; }

.was-validated .custom-control-input:invalid ~ .custom-control-label, .custom-control-input.is-invalid ~ .custom-control-label {
  color: #dc3545; }
  .was-validated .custom-control-input:invalid ~ .custom-control-label::before, .custom-control-input.is-invalid ~ .custom-control-label::before {
    border-color: #dc3545; }

.was-validated .custom-control-input:invalid ~ .invalid-feedback,
.was-validated .custom-control-input:invalid ~ .invalid-tooltip, .custom-control-input.is-invalid ~ .invalid-feedback,
.custom-control-input.is-invalid ~ .invalid-tooltip {
  display: block; }

.was-validated .custom-control-input:invalid:checked ~ .custom-control-label::before, .custom-control-input.is-invalid:checked ~ .custom-control-label::before {
  border-color: #e4606d;
  background-color: #e4606d; }

.was-validated .custom-control-input:invalid:focus ~ .custom-control-label::before, .custom-control-input.is-invalid:focus ~ .custom-control-label::before {
  box-shadow: 0 0 0 0.2rem rgba(220, 53, 69, 0.25); }

.was-validated .custom-control-input:invalid:focus:not(:checked) ~ .custom-control-label::before, .custom-control-input.is-invalid:focus:not(:checked) ~ .custom-control-label::before {
  border-color: #dc3545; }

.was-validated .custom-file-input:invalid ~ .custom-file-label, .custom-file-input.is-invalid ~ .custom-file-label {
  border-color: #dc3545; }

.was-validated .custom-file-input:invalid ~ .invalid-feedback,
.was-validated .custom-file-input:invalid ~ .invalid-tooltip, .custom-file-input.is-invalid ~ .invalid-feedback,
.custom-file-input.is-invalid ~ .invalid-tooltip {
  display: block; }

.was-validated .custom-file-input:invalid:focus ~ .custom-file-label, .custom-file-input.is-invalid:focus ~ .custom-file-label {
  border-color: #dc3545;
  box-shadow: 0 0 0 0.2rem rgba(220, 53, 69, 0.25); }

.form-inline {
  display: flex;
  flex-flow: row wrap;
  align-items: center; }
  .form-inline .form-check {
    width: 100%; }
  @media (min-width: 576px) {
    .form-inline label {
      display: flex;
      align-items: center;
      justify-content: center;
      margin-bottom: 0; }
    .form-inline .form-group {
      display: flex;
      flex: 0 0 auto;
      flex-flow: row wrap;
      align-items: center;
      margin-bottom: 0; }
    .form-inline .form-control {
      display: inline-block;
      width: auto;
      vertical-align: middle; }
    .form-inline .form-control-plaintext {
      display: inline-block; }
    .form-inline .input-group,
    .form-inline .custom-select {
      width: auto; }
    .form-inline .form-check {
      display: flex;
      align-items: center;
      justify-content: center;
      width: auto;
      padding-left: 0; }
    .form-inline .form-check-input {
      position: relative;
      flex-shrink: 0;
      margin-top: 0;
      margin-right: 0.25rem;
      margin-left: 0; }
    .form-inline .custom-control {
      align-items: center;
      justify-content: center; }
    .form-inline .custom-control-label {
      margin-bottom: 0; } }

.btn {
  display: inline-block;
  font-weight: 400;
  color: #212529;
  text-align: center;
  vertical-align: middle;
  user-select: none;
  background-color: transparent;
  border: 1px solid transparent;
  padding: 0.375rem 0.75rem;
  font-size: 1rem;
  line-height: 1.5;
  border-radius: 0.25rem;
  transition: color 0.15s ease-in-out, background-color 0.15s ease-in-out, border-color 0.15s ease-in-out, box-shadow 0.15s ease-in-out; }
  @media (prefers-reduced-motion: reduce) {
    .btn {
      transition: none; } }
  .btn:hover {
    color: #212529;
    text-decoration: none; }
  .btn:focus, .btn.focus {
    outline: 0;
    box-shadow: 0 0 0 0.2rem rgba(0, 123, 255, 0.25); }
  .btn.disabled, .btn:disabled {
    opacity: 0.65; }

a.btn.disabled,
fieldset:disabled a.btn {
  pointer-events: none; }

.btn-primary {
  color: #fff;
  background-color: #007bff;
  border-color: #007bff; }
  .btn-primary:hover {
    color: #fff;
    background-color: #0069d9;
    border-color: #0062cc; }
  .btn-primary:focus, .btn-primary.focus {
    box-shadow: 0 0 0 0.2rem rgba(38, 143, 255, 0.5); }
  .btn-primary.disabled, .btn-primary:disabled {
    color: #fff;
    background-color: #007bff;
    border-color: #007bff; }
  .btn-primary:not(:disabled):not(.disabled):active, .btn-primary:not(:disabled):not(.disabled).active,
  .show > .btn-primary.dropdown-toggle {
    color: #fff;
    background-color: #0062cc;
    border-color: #005cbf; }
    .btn-primary:not(:disabled):not(.disabled):active:focus, .btn-primary:not(:disabled):not(.disabled).active:focus,
    .show > .btn-primary.dropdown-toggle:focus {
      box-shadow: 0 0 0 0.2rem rgba(38, 143, 255, 0.5); }

.btn-secondary {
  color: #fff;
  background-color: #6c757d;
  border-color: #6c757d; }
  .btn-secondary:hover {
    color: #fff;
    background-color: #5a6268;
    border-color: #545b62; }
  .btn-secondary:focus, .btn-secondary.focus {
    box-shadow: 0 0 0 0.2rem rgba(130, 138, 145, 0.5); }
  .btn-secondary.disabled, .btn-secondary:disabled {
    color: #fff;
    background-color: #6c757d;
    border-color: #6c757d; }
  .btn-secondary:not(:disabled):not(.disabled):active, .btn-secondary:not(:disabled):not(.disabled).active,
  .show > .btn-secondary.dropdown-toggle {
    color: #fff;
    background-color: #545b62;
    border-color: #4e555b; }
    .btn-secondary:not(:disabled):not(.disabled):active:focus, .btn-secondary:not(:disabled):not(.disabled).active:focus,
    .show > .btn-secondary.dropdown-toggle:focus {
      box-shadow: 0 0 0 0.2rem rgba(130, 138, 145, 0.5); }

.btn-success {
  color: #fff;
  background-color: #28a745;
  border-color: #28a745; }
  .btn-success:hover {
    color: #fff;
    background-color: #218838;
    border-color: #1e7e34; }
  .btn-success:focus, .btn-success.focus {
    box-shadow: 0 0 0 0.2rem rgba(72, 180, 97, 0.5); }
  .btn-success.disabled, .btn-success:disabled {
    color: #fff;
    background-color: #28a745;
    border-color: #28a745; }
  .btn-success:not(:disabled):not(.disabled):active, .btn-success:not(:disabled):not(.disabled).active,
  .show > .btn-success.dropdown-toggle {
    color: #fff;
    background-color: #1e7e34;
    border-color: #1c7430; }
    .btn-success:not(:disabled):not(.disabled):active:focus, .btn-success:not(:disabled):not(.disabled).active:focus,
    .show > .btn-success.dropdown-toggle:focus {
      box-shadow: 0 0 0 0.2rem rgba(72, 180, 97, 0.5); }
      
.mb-3,
.my-3 {
  margin-bottom: 1rem !important; }

        body {
          margin: 0;
          padding: 0;
          font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", "Roboto", "Oxygen",
            "Ubuntu", "Cantarell", "Fira Sans", "Droid Sans", "Helvetica Neue",
            sans-serif;
          -webkit-font-smoothing: antialiased;
          -moz-osx-font-smoothing: grayscale;
          background: linear-gradient(to bottom left, #2d2d35, #46495a);
        }
        code {
          font-family: source-code-pro, Menlo, Monaco, Consolas, "Courier New",
            monospace;
        }
        a{
          color: white;
        }
        a:hover {
          color:  #ffcfa4;
        }
        .App {
          text-align: center;
          background: linear-gradient(to top left, #2d2d35, #46495a);
          color:  white;
        }
        .app-body {
          padding: 1em 5em;
        }
        .wrapperData {
          background: linear-gradient(to right, #73767f, #5a5c68);
          border-radius: 10px;
          padding-top: 1.6em;
          height: 5em;
          text-align:center;
        }
        .wrapperDataRelay {
          background: linear-gradient(to right, #73767f, #5a5c68);
          border-radius: 10px;
          padding-top: 0.7em;
          height: 3em;
          text-align:center;
        }
        .wrapperIndicator {
          background: linear-gradient(to right, #73767f, #5a5c68);
          border-radius: 10px;
          height: 15em;
          padding-top: 1em;
        }
        .indicator {
          padding-bottom: 2em;
        }
        .indicator-name {
          text-transform: uppercase;
          font-size: 16px;
          text-align: center !important;
        }
        .indicator-label-left {
          color: #aaaaaa;
          left: -20%;
          position: relative;
          font-size: 12.8px;
        }
        .indicator-label-right {
          color: #aaaaaa;
          left: 20%;
          position: relative;
          font-size: 12.8px;
        }
        .wrapper-indicator-name{
          padding-right: 0 !important;
        }
        .btn-secondary{
        	background: #5a6268;
          border-color: #545b62;
          height: 2em;
          width: 1.8em;
          margin: 0 0.1em;
          padding: 0.2em;
        }
        .btn-secondary:hover{
          background: #5a6268;
          border-color: #aaaaaa;
        }
        .btns-container{
          padding: 0;
        }
        .btns-set-time{
          height: 2em !important;
          width: 6em !important;
        }
        .btns-get-state{
          height: 2em !important;
          width: 8em !important;
        }
        .wrapper-text{
          text-align: left;
          text-transform: uppercase;
          padding: 1em 1em;
        }
        .slidecontainer {
          width: 100%;
        }
        .slider {
          -webkit-appearance: none;
          width: 100%;
          height: 5px;
          border-radius: 5px;   
          background: #fff;
          outline: none;
          -webkit-transition: .2s;
          transition: opacity .2s;
        }
        .slider::-webkit-slider-thumb {
          -webkit-appearance: none;
          appearance: none;
          width: 15px;
          height: 15px;
          border-radius: 50%; 
          background: #ffcfa4;
          cursor: pointer;
        }
        .slider::-moz-range-thumb {
          width: 20px;
          height: 20px;
          border-radius: 50%;
          background: #ffcfa4;
          cursor: pointer;
        }
        .slider::-webkit-slider-thumb{
          box-shadow: #ffcfa4;
        }
        .slider::-moz-range-progress {
            background: #ffcfa4; 
            border-radius: 4px; 
            height: 4px;
        }
        .slider::-ms-fill-lower{
          background: #ffcfa4; 
        }
        
    </style>
	
	<body>
		 <div class="App">
		 	 <div class="app-body">
	
        <div class="container">
          <div class="row"><div class="col-12 wrapper-text"><h3 lang="en">State</h3></div></div>

          <div class="row">
            <div class="col-lg-4 col-md-4 col-sm-6 col-xs-12 wrapper-text">
                <div class="wrapperData mb-3"><p>time: <span id="time_value">{}</span></p></div>
                <div class="wrapperData mt-3"><p>data: <span id="data_value">{}</span></p></div>
            </div>
            
            <div class="col-lg-4 col-md-4 col-sm-6 col-xs-12 wrapper-text">
                <div class="wrapperData mb-3"><p>temp DHT: <span id="temp_DHT">{}</span></p></div>
                <div class="wrapperData mt-3"><p>temp DS: <span id="temp_DS">{}</span></p></div>
            </div>
            <div class="col-lg-4 col-md-4 col-sm-6 col-xs-12 wrapper-text">
                <div class="wrapperDataRelay mb-3"><p>relay hour state: <span id="relay_hour_state">{}</span></p></div>
                <div class="wrapperDataRelay mt-3 mb-3"><p>relay minute state: <span id="relay_minute_state">{}</span></p></div>
                <div class="wrapperDataRelay mt-3"><p>relay second state: <span id="relay_second_state">{}</span></p></div>
            </div>
          </div>

          <div class="row"><div class="col-12 wrapper-text"><h3>Settings</h3></div></div>

        </div>
      
        <div class="container">

	        <div class="row">

		        <div class="col-lg-4 col-md-6 col-sm-12 col-xs-12">
              <div class="indicator">
                <div class="wrapperIndicator">
                  
                  <div class="row"><div class="col-12 wrapper-indicator-name"><p class="indicator-name">Hour:</p></div></div>

                  <div class="row">

                    <div class="col-5 wrapper-indicator-name">
                      <p class="indicator-name">Dawn in <span id="hour1_value">7</span></p>
                    </div>

                    <div class="col-6 wrapper-input-range">
                      <div class="slidecontainer">
                        <input type="range" class="slider" id="hour1" min="0" max="23" step="1"  oninput="fun_hour1()">
                        <div class="row">
                          <div class="col-6 indicator-label-left"><p>0</p></div>
                          <div class="col-6 indicator-label-right"><p>23</p></div>
                        </div>
                    </div>
                  </div>

                  </div>

                  <div class="row">

                    <div class="col-5 wrapper-indicator-name">
                      <p class="indicator-name">Count <span id="hour2_value">16</span></p>
                    </div>

                    <div class="col-6 wrapper-input-range">
                      <div class="slidecontainer">
                          <input type="range"  class="slider" id="hour2" min="0" max="24" step="1"  oninput="fun_hour2()">
                          <div class="row">
                            <div class="col-6 indicator-label-left"><p>0</p></div>
                            <div class="col-6 indicator-label-right"><p>24</p></div>
                          </div>
                      </div>
                    </div>

                  </div>

                </div>
              </div>
            </div>

		        <div class="col-lg-4 col-md-6 col-sm-12 col-xs-12">
			        <div class="indicator">
                <div class="wrapperIndicator">

                  <div class="row"><div class="col-12 wrapper-indicator-name"><p class="indicator-name">Minute:</p></div></div>

                  <div class="row">

                    <div class="col-5 wrapper-indicator-name">
                      <p class="indicator-name">Dawn in <span id="minute1_value">0</span></p>
                    </div>

                    <div class="col-6 wrapper-input-range">
                      <div class="slidecontainer">
                          <input type="range"  class="slider" id="minute1" min="0" max="59" step="1"  oninput="fun_minute1()">
                          <div class="row">
                            <div class="col-6 indicator-label-left"><p>0</p></div>
                            <div class="col-6 indicator-label-right"><p id='dawnInMinuteRange'>59</p></div>
                          </div>
                      </div>
                    </div>

                  </div>

                  <div class="row">

                    <div class="col-5 wrapper-indicator-name">
                      <p class="indicator-name">Count <span id="minute2_value">20</span></p>
                    </div>

                    <div class="col-6 wrapper-input-range">
                      <div class="slidecontainer">
                          <input type="range"  class="slider" id="minute2" min="0" max="60" step="1"  oninput="fun_minute2()">
                          <div class="row">
                            <div class="col-6 indicator-label-left"><p>0</p></div>
                            <div class="col-6 indicator-label-right"><p id='countMinuteRange'>60</p></div>
                          </div>
                      </div>
                    </div>

                  </div>

                  <div class="row">

                    <div class="col-5 wrapper-indicator-name">
                      <p class="indicator-name">Period <span id="minute3_value">30</span></p>
                    </div>

                    <div class="col-6 btns-container">
                      <div class="slidecontainer">
                          <button type='button' class="btn btn-secondary" value='10' onclick='set_minute_period(10)'>10</button>
                          <button type='button' class="btn btn-secondary" value='15' onclick='set_minute_period(15)'>15</button>
                          <button type='button' class="btn btn-secondary" value='20' onclick='set_minute_period(20)'>20</button>
                          <button type='button' class="btn btn-secondary" value='30' onclick='set_minute_period(30)'>30</button>
                          <button type='button' class="btn btn-secondary" value='60' onclick='set_minute_period(60)'>60</button>
                      </div>
                    </div>

                  </div>

                </div>
              </div>
		        </div>

          	<div class="col-lg-4 col-md-6 col-sm-12 col-xs-12">
			        <div class="indicator">
                <div class="wrapperIndicator">
                  
                  <div class="row"><div class="col-12 wrapper-indicator-name"><p class="indicator-name">Second:</p></div></div>

                  <div class="row">
                    <div class="col-5 wrapper-indicator-name">
                      <p class="indicator-name">Dawn in <span id="second1_value">0</span></p>
                    </div>
                    <div class="col-6 wrapper-input-range ">
                      <div class="slidecontainer">
                          <input type="range"  class="slider" id="second1" min="0" max="59" step="1" value="0" oninput="fun_second1()">
                          <div class="row">
                            <div class="col-6 indicator-label-left"><p>0</p></div>
                            <div class="col-6 indicator-label-right"><p id='dawnInSecondRange'>59</p></div>
                          </div>
                      </div>
                    </div>
                  </div>

                  <div class="row">
                    <div class="col-5 wrapper-indicator-name">
                      <p class="indicator-name">Count <span id="second2_value">40</span></p>
                    </div>

                    <div class="col-6 wrapper-input-range">
                      <div class="slidecontainer">
                          <input type="range" class="slider" id="second2" min="0" max="60" step="1" value="40" oninput="fun_second2()">
                          <div class="row">
                            <div class="col-6 indicator-label-left"><p>0</p></div>
                            <div class="col-6 indicator-label-right"><p id='countSecondRange'>60</p></div>
                          </div>
                      </div>
                    </div>
                  </div>

                  <div class="row">
                    <div class="col-5 wrapper-indicator-name">
                      <p class="indicator-name"> Period <span id="second3_value">60</span></p>
                    </div>

                    <div class="col-6 btns-container">
                      <div class="slidecontainer">
                        <button type='button' class="btn btn-secondary" value='10' onclick='set_second_period(10)'>10</button>
                        <button type='button' class="btn btn-secondary" value='15' onclick='set_second_period(15)'>15</button>
                        <button type='button' class="btn btn-secondary" value='20' onclick='set_second_period(20)'>20</button>
                        <button type='button' class="btn btn-secondary" value='30' onclick='set_second_period(30)'>30</button>
                        <button type='button' class="btn btn-secondary" value='60' onclick='set_second_period(60)'>60</button>
                      </div>
                    </div>
                  </div>

                </div>
              </div>		
            </div>

        </div>  
			
        <button type='button' class="btn btn-secondary btns-set-time" value='Set time' onclick='set_time()'>Set state</button>
        <button type='button' class="btn btn-secondary btns-get-state" onclick="getInitialState()">Current state</button>

      </div>

      </div>

		<script>
			var minute3 = 30;
			var second3 = 60;
			var str_data;
			setInterval(get_data, 1000);
			function get_data() {
        
				var xhttp = new XMLHttpRequest();
				xhttp.onreadystatechange = function() {
					if (this.readyState == 4 && this.status == 200) {
            let data_js = JSON.parse(this.responseText);
						document.getElementById("time_value").innerHTML = data_js.data.time_value;
            document.getElementById("data_value").innerHTML = data_js.data.data_value;
            document.getElementById("temp_DHT").innerHTML = data_js.data.temp_DHT;
            document.getElementById("temp_DS").innerHTML = data_js.data.temp_DS;
            document.getElementById("relay_hour_state").innerHTML = data_js.data.relay_hour_state;
            document.getElementById("relay_minute_state").innerHTML = data_js.data.relay_minute_state;
            document.getElementById("relay_second_state").innerHTML = data_js.data.relay_second_state;
					}
				};
				xhttp.open("GET", "read_data", true);
				xhttp.send();
			}
			
			function set_time() {
				var xhttp = new XMLHttpRequest();
				hour1 = document.getElementById('hour1').value;
				hour2 = document.getElementById('hour2').value;
				minute1 = document.getElementById('minute1').value;
				minute2 = document.getElementById('minute2').value;
				second1 = document.getElementById('second1').value;
				second2 = document.getElementById('second2').value;
				var str = '{"hour": {\n  "start": ' + hour1 + ',\n  "number": ' + hour2 + '\n},"minute": {\n  "start": ' + minute1 + ',\n  "number": ' + minute2 + ',\n  "period": ' + minute3 + '\n},"second": {\n  "start": ' + second1 + ',\n  "number": ' + second2 + ',\n  "period": ' + second3 + '\n}}';
				xhttp.open("POST", "set_time", true);
				xhttp.send(str);
			}
			
			function fun_hour1() {
				var rng = document.getElementById('hour1');
				var p = document.getElementById('hour1_value');
				p.innerHTML = rng.value;
			}
			
			function fun_hour2() {
				var rng = document.getElementById('hour2');
				var p = document.getElementById('hour2_value');
				p.innerHTML = rng.value;
			}
			
			function fun_minute1() {
				var rng = document.getElementById('minute1');
				var p = document.getElementById('minute1_value');
				p.innerHTML = rng.value;
      }
      
			function fun_minute2() {
				var rng = document.getElementById('minute2');
				var p = document.getElementById('minute2_value');
				p.innerHTML = rng.value;
			}
			
			function set_minute_period(per) {
				minute3 = per;
				var p = document.getElementById('minute3_value');
        p.innerHTML = minute3;
        document.getElementById('dawnInMinuteRange').innerHTML = per - 1;
        document.getElementById('minute1_value').innerHTML = per -1;
        document.getElementById('minute2_value').innerHTML = per;
        document.getElementById('countMinuteRange').innerHTML = per;
        document.getElementById('minute1').value = per-1;
        document.getElementById('minute2').value = per;
        document.getElementById('minute1').max = per-1;
        document.getElementById('minute2').max = per;
        
			}
			
			function fun_second1() {
				var rng = document.getElementById('second1');
				var p = document.getElementById('second1_value');
				p.innerHTML = rng.value;
			}
			function fun_second2() {
				var rng = document.getElementById('second2');
				var p = document.getElementById('second2_value');
				p.innerHTML = rng.value;
			}
			function set_second_period(per) {
				second3 = per;
				var p = document.getElementById('second3_value');
        p.innerHTML = second3;
        document.getElementById('dawnInSecondRange').innerHTML = per - 1;
        document.getElementById('countSecondRange').innerHTML = per;
        document.getElementById('second1_value').innerHTML = per -1;
        document.getElementById('second2_value').innerHTML = per;
        document.getElementById('second1').value = per-1;
        document.getElementById('second2').value = per;
        document.getElementById('second1').max = per-1;
        document.getElementById('second2').max = per;
        
			}
      getInitialState = () => {
        let xhttp = new XMLHttpRequest();
        xhttp.onreadystatechange = function() {
					if (this.readyState == 4 && this.status == 200) {
            let data_js = JSON.parse(this.responseText);
            set_second_period(data_js.second.period);
            set_minute_period(data_js.minute.period);
            document.getElementById('hour1').value = data_js.hour.start;
            document.getElementById('hour2').value = data_js.hour.number;
            document.getElementById('minute1').value = data_js.minute.start;
            document.getElementById('minute2').value = data_js.minute.number;
            
            document.getElementById('second1').value = data_js.second.start;
            document.getElementById('second2').value = data_js.second.number;
          
            fun_second1();
            fun_second2();
            fun_minute1();
            fun_minute2();
            fun_hour1();
            fun_hour2();
					}
				};
				xhttp.open("GET", "get_setting", true);
				xhttp.send();
      }
      getInitialState();
		</script>
	</body>
</html>
)=====";


const char ERR_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
	<style>
	</style>
	<body>
		<h1>Error: 404 - not found.<h1>
	</body>
</html>
)=====";


#endif //INDEX_H1