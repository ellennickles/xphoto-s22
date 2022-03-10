# Mar 9 • Week 7 • Automating Photomontages

>...since captured, "painted," and synthesized pixel values can be combined seamlessly, the digital image blurs the customary distinctions between painting and photography and between mechanical and handmade pictures. A digital image may be part scanned photograph, part computer-synthesized shaded perspective, and part electronic "painting"--all smoothly melded into an apparently coherent whole. It may be fabricated from found files, disk litter, the detritus of cyberspace. Digital imagers give meaning and value to computational readymades by appropriation, transforrmation, reprocessing, and recombination; we have entered the age of electrobriocollage. (William J. Mitchell, *The Reconfigured Eye: Visual Truth in the Post-Photographic Era*, 4th printing, 2001)

## Questions
- What is the Surrealist idea of automatism?
- What is a photomontage, and what is its history?
- What are a couple of techniques to computationally generate photomontages?
- Is the difference between photomontaging by hand and using code significant? 

## In class
- Workshop: Automating photomontages
    - Exercise
    - Related work
    - Technical demo in p5
- Homework review (in small groups)

## Resources / examples
- [Slides](https://drive.google.com/drive/u/0/folders/1YZtWK03TXGCoGmy7WeQYF-BBulZFAbHA)
- [Chrome Extension Image Downloader](https://chrome.google.com/webstore/detail/image-downloader/cnpniohnfphhjihaiiggeabnkjhpaldj?hl=en-US)
- [Coding Train Videos 9.1-9.3](https://thecodingtrain.com/Tutorials/) on tranformations using `translate()`, `rotate()`, `push()` and `pop()` ~40min
- Removing image backgrounds
    - [Remove a background in Preview app on Mac](https://support.apple.com/guide/preview/extract-an-image-or-remove-a-background-prvw15636/mac)
    - [How to Make Transparent Background in Paint 3D on Windows](https://asapguide.com/transparent-background-paint-3d/) (not tested, keep us posted on how this goes!)
    - [How to remove a background in Photoshop for beginners](https://www.youtube.com/watch?v=BQQqnn2uZv4)
- p5 demos
    - [Image basics](https://editor.p5js.org/enickles/sketches/SH_0wRoja)
    - [Image modes](https://editor.p5js.org/enickles/sketches/dABsgrS-g)
- p5 starter sketches
    - Auto photomontages (from one array)
        - [Scattered](https://editor.p5js.org/enickles/sketches/blBZttvpS)
        - [Half and half vertical](https://editor.p5js.org/enickles/sketches/YqIlTj9z4)
    - Auto photomontages (from two arrays)
        - [Background foreground](https://editor.p5js.org/enickles/sketches/AeeyaHFhx)
        - [Half and half vertical](https://editor.p5js.org/enickles/sketches/q9_D4kQ63)
        - [Half and half horiztontal](https://editor.p5js.org/enickles/sketches/1Tv17Qkg7)


## Assignment due Tuesday • Mar 22 • 11:59pm (two weeks)
### PART 1 • EXPERIMENT & REFLECT 
- Create a series of 5-8 computationally-generated photomontages. Be intentional about your image choices to play with the juxtaposition of photographic elements, such as composition (formal qualities) and subject, style, and meaning (content). Feel free to collect and prepare more images than in the class examples to generate more options for yourself. Before you upload the images to your p5 sketch, double-check the [Image Preparation Checklist](https://docs.google.com/presentation/d/1n8QfUpTNXAHwV8TifyAetkLrRH76uN394B2RB96QiLM/edit#slide=id.g115f462f905_0_16) on the slides from class.
- Post the images on your blog, and write a short reflection on your process and results. What do the images show? Why do you like them? What qualities do you like best (see [Elements of a Photograph](https://github.com/ellennickles/xphoto-s22/blob/main/resources/photograph-elements.md))? What did you have trouble with? What would you do differently next time? Describe the experience of finding and selecting the images? Do you feel like a photographer? What was surprising, enjoyable, or challenging?
### PART 2 • [READ](https://drive.google.com/drive/u/0/folders/1YZtWK03TXGCoGmy7WeQYF-BBulZFAbHA) & RESPOND
- Read *Making AI Art Responsibly: A Field Guide* by Emily Saltz, Lia Coleman, and Claire Leibowicz, for critical questions to consider when using AI approaches to create art.
- Read *Origins and Endpoints of Image Training Datasets Created “In the Wild”* by Adam Harvey on the origins of common AI image training datasets consisting of images of human faces.
- The Harvey paper briefly mentions the dataset, Flickr Faces High Quality (FFHQ). In two weeks, we will use FFHQ as part of our process to computationally generate images. Research the FFHQ dataset. What can you find out about it? What is it? Where is it from? Who made it and how? When and for what purpose(s) was it created? Can you address some of the concerns and questions posed in the Harvey paper and in the field guide to *Making AI Art Reponsibly*? Are there any questions that are tricky to answer? Be sure to cite your research sources. Based on what you find, how do you feel about using this dataset in our course?
- Include at least one (1) question for discussion or further reflection.

### SUBMIT • [Submit your blog post here](https://forms.gle/JfwCTv7JqkieZ8yz8) (NYU login required)

### PREPARE FOR WEEK 8 (MAR 23) IN TWO WEEKS
- Install [Visual Studio Code](https://code.visualstudio.com/)
- After install, launch the application and navigate to *Extensions* (last menu item on the far left). Search for and install the extension: p5.vscode by Sam Lavigne
