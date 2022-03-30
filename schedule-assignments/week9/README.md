# Mar 30 • Week 9 • Generative Images 2 • GAN Training

>The way that GANs work is actually via a two-player minimax game. One player, the generator, creates images or other kinds of data. The other player, the discriminator, recognizes these images as either real or fake. When we train the two models, we see that there’s adversarial competition over how to classify the fake samples produced by the generator. The generator tries to adapt the input to the discriminator to cause it to be misclassified, and the discriminator tries to correctly classify each of the fake inputs at fake. At the same time, the discriminator faces a non-adversarial component where it learns to recognize the real examples as real. (Ian Goodfellow, [Adversarial Machine Learning](https://www.youtube.com/watch?v=sucqskXRkss), ICLR invited talk, 2019)

## Questions
- What is the process for training a type of StyleGAN model in Google Colab?
- How do we evaluate / test / run inference on our trained model, i.e. generate images with it?

## In class
- Share datasets
- Related work
- Review GANs and transfer learning
- Start training a StyleGAN2-ADA model in Google Colab
- Demo: Generating images from a trained model

## Resources / examples
- [Slides](https://drive.google.com/drive/u/0/folders/1YZtWK03TXGCoGmy7WeQYF-BBulZFAbHA)
- Colab Notebook: [WK9 • SG2-ADA-PyTorch Notebook • XPhoto 2022.ipynb](https://colab.research.google.com/drive/1r9Rvn84ADW67oW48Coa492LADVGZtTmr) (also in our Google Drive folder)

## Assignment due Tuesday • Apr 5 • 11:59pm 
### PART 1 • EXPERIMENT & REFLECT 
- **Train** • Following the steps from class and in our Colab Notebook, budget enough time this week to train (or continue training) a StyleGAN2-ADA model for as long as you can in Google Colab. Monitor the progress in the `results` folder by checking the *fakes* images. If you don't see any significant changes over time, it's probably time to stop training.
- **Generate** • No matter how far you get, find a .pkl file (aka *network snapshot*) with results that look interesting or promising to you in some way, and use that version of your trained model to generate images. 
- **Share** • Post some the images on your blog. Write a short reflection on your process and results. For how long did you train your model? What do the images show? Anything surprising? Do you like them? If so, what qualities do you like best (see [Elements of a Photograph](https://github.com/ellennickles/xphoto-s22/blob/main/resources/photograph-elements.md))? What did you have trouble with or what was confusing? Do you feel like a photographer? 
### PART 2 • [READ](https://drive.google.com/drive/u/0/folders/1YZtWK03TXGCoGmy7WeQYF-BBulZFAbHA) & RESPOND
- Read Lev Manovich's, "[Inside Photoshop](http://computationalculture.net/inside-photoshop/)", from Computational Culture 1, November 2011.
- Although we are not using Photoshop next week, we are programming layers with code. This article provides historical context for layers (a hallmark of Photoshop), as well for other features that we might commonly associate with image editing. If we consider that Photoshop is a graphical user interface for code-driven manipulations of digital images--files consisting of numbers, is a photograph edited in Photoshop any different from one treated with a self-coded program to manipulate those same numbers? What are the affordances of using pre-existing software vs writing our own? Does a digital photograph have its own unique properties or is it defined by the tools with which we use them? 
- Include at least one (1) question for discussion or further reflection.

### EXTRA CREDIT (2 points) • RESEARCH
- StyleGAN (and all its versions) represents just one type of GAN. There are many different GANs with applications ranging from text-to-image synthesis to face aging to 3D object generation. Research another type of GAN. What does it do and how and why do people use it? Be sure to include links to your resources. 
- You are welcome to include this research in the same blog post for this week.
- Some places to start: [gans-awesome-applications](https://github.com/nashory/gans-awesome-applications), [Two-minute papers](https://www.youtube.com/c/K%C3%A1rolyZsolnai/featured) (YouTube channel), [The GAN Zoo](https://github.com/hindupuravinash/the-gan-zoo/) (dated now, but demonstrates the vast variety)

### SUBMIT • [Submit your blog post here](https://forms.gle/JfwCTv7JqkieZ8yz8)
