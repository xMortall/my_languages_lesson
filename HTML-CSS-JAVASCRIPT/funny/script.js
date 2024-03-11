// Example script for toggling a hidden section

const toggleBtn = document.querySelector('#toggle-btn');
const hiddenSection = document.querySelector('#hidden-section');

toggleBtn.addEventListener('click', () => {
  hiddenSection.classList.toggle('hidden');
});